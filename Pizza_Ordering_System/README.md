## Pizza_Ordering_System fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/pizza_ordering_system

## Application information
Pizza_Ordering_System simulates a system for inputting pizza orders. Upon entering the application, one must submit the password (pizzapass) before being allowed into the ordering system. Once in, the user can choose to input an order, edit an order, view one, view all, delete one, clear all, or logout. In order to input an order, the user must provide a name, then must go through a variety of menus customizing their pizza (such as what type of pizza, size, toppings, sauces, etc). Upon completing their pizza, the user is placed in a finalize order menu, in which they are able to add another pizza, exit the order screen, or remove a pizza from the order.

The step for adding/removing toppings and sauces is an entire menu unto itself. The user is able to choose whether to add or remove toppings/sauces, or to finalize their order. If the user chooses to add a topping/sauce, they are taken to a screen to select the type of topping/sauce or to cancel. Upon choosing the type of topping/sauce (eg meat), the user is taken to a list of the various toppings/sauces that fall into the category chosen. The user must type the name of the topping/sauce that they want, at which point they are returned to the category select screen, where they can select a different category or cancel back to the topping/sauce menu. Removing toppings/sauces presents the user with an indexed list of the toppings/sauces thus far chosen starting at one, with zero being cancel. The user then selects the choice they wish and the corresponding topping/sauce is removed from the pizza order. Finalizing the order takes the user to the finalize order menu.

Removing pizzas, along with editing and viewing/deleting single orders, follow the same format as removing toppings/sauces. The user is presented with an indexed list of the objects in question (pizzas or orders) starting at one, with zero being an option to cancel. The user then chooses the index of the object they wish to interact with and the given command is performed. Remove pizza/delete single order will delete the specificied pizza or order, view single order will print the entirety of the order selected, and edit order will put the user into the finalize order menu of the chosen order.

Clear all requires a confirmation (zero to cancel, one to confirm), at which point it will delete all orders currently present in the system. Logout will kick the user back to the password screen, clearing all orders in the process.

## Vulnerabilities
Pizza_Ordering_System has one vulnerability.
1. All of the options that create an indexed list for the user (remove pizza, edit order, and view/delete single order) rely on a helper method in order to print the list. That helper method estimates wait times on the order by looking at the first pizza in the order. However, the user is able to remove all the pizzas from a particular order by repeatedly calling remove pizza on the finalize order menu. If this happens, and an order is left with no pizzas in it, the next time the helper method is called (eg by calling view single order), the application will crash.

## Fuzzer information
Due to the recursive nature of many of the menus (input password, main menu, choose topping/sauce, and finalize order all have a variety of options that either end with the user on the same menu or transitioning between the four menus), the fuzzer reads the output of the application and searches for a unique substring to determine which menu it is currently on and then sends that information to the relay. The unique substrings are as follows:

    Menu                Substring                   Expected Int
    Password		    "Enter system password:"    0
    Main		        "1. Input Order"            1
    Toppings/Sauce  	"1. Add Toppings"           2
    Finalize Order 	    "1. Add another Pizza"      3

The fuzzer sends 13 ints, which the relay converts into an expression that can be read by the application. The usage and expected range of the generated ints are as follows:

    Variable Name       Usage                                                   Expected Range      Instances
    menu                Represent which menu the application is on              See above           1
    length              Limits the length of the input string                   [1, 9]              1
    cha                 Represents chars using ASCII conversion                 [32, 126]           9
    input               Represents various input values for the application     Unconstrained       3

Because of the large variety of inputs that the various menus require, the relay uses modulus to constrain the generated inputs (labelled lvl1In, lvl2In, and lvl3In) to whatever is needed by the application at that time.

The relay first checks the menu int and then decides how to proceed from there.

    If menu == 0 (Input password): lvl1In = lvl1In % 2
    	If lvl1In == 0, input the valid password (pizzapass). Otherwise, send the generic string as an invalid password
    If menu == 1 (Main menu): lvl1In = lvl1In % 8 + 1
    	If lvl1In == 1 (New order): Send the generic string as the order name, lvl2In = lvl2In % 3 + 1
    		If lvl2In == 1 (Choice pie): Send lvl3In % 2 + 1
    		If lvl2In == 2 (Choice sub): Send 1/1, 1/2, 2/1, or 2/2 depending on lvl3In % 4
    		If lvl2In == 3 (Choice bowl): Send lvl3In % 2 + 1
    	If lvl1In == 2, 3, or 5 (Update order, view one, and delete one all have the same input format): Send lvl2In % 10 as index
    	If lvl1In == 6 (Clear all): Send lvl2In % 2 as confirmation choice
    If menu == 2 (Topping/sauce): lvl1In = lvl1In % 5 + 1
    	If lvl1In == 1 (Add topping): Use lvl2In to choose which category of topping and lvl3In to choose the exact topping to add
    	If lvl1In == 3 (Add sauce): Use lvl2In to choose which category of sauce and lvl3In to choose the exact sauce to add
    	If lvl1In == 2 or 4 (Remove topping/sauce): Send lvl2In % 10 as index
    If menu == 3 (Finalize order): lvl1In = lvl1In % 3 + 1
    	If lvl1In == 1 (Add another pizza): Act as though new order from main menu was chosen, but do not send the order name
    	If lvl1In == 3 (Remove pizza): Send lvl2In % 10 as index

## Running the fuzzer
The fuzzer files must be named pizza_ordering_system.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
