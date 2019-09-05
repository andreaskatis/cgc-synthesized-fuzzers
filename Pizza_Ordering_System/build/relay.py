#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
class RELAY():
    def __init__(self):
        pass

    def run(self):
        while True:
            msg = self.getTestVector()
            self.processTestVector(msg)

    def getTestVector(self):
        payload = stdin.readline()
        un64 = base64.b64decode(payload.encode()).decode()
        pairlist = un64.split()
        assert(0 == (len(pairlist) % 2))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        return alist

    def processTestVector(self,msg):
        menu = int(msg["menu"])
        genStr = msg["genStr"]
        lvl1In = int(msg["lvl1In"])
        lvl2In = int(msg["lvl2In"])
        lvl3In = int(msg["lvl3In"])

        msg = ""
        if (menu == 0): #Input password
            if (lvl1In % 2 == 0): #Valid password
                msg = "{password}".format(password = "pizzapass")
                sys.stdout.write(msg)
                sys.stdout.flush()
            else: #Invalid password
                msg = "{password}".format(password = genStr)
                sys.stdout.write(msg)
                sys.stdout.flush()
        elif (menu == 1): #Main menu
            lvl1In = lvl1In % 8 + 1
            msg = "{cmd}".format(cmd = lvl1In)
            sys.stdout.write(msg)
            sys.stdout.flush()
            if (lvl1In == 1): #Input order
                msg = "{name}".format(name = genStr)
                sys.stdout.write(msg)
                sys.stdout.flush()

                lvl2In = lvl2In % 3 + 1
                msg = "{typeChoice}".format(typeChoice = lvl2In)
                sys.stdout.write(msg)
                sys.stdout.flush()
                if (lvl2In == 1): #Choice pie
                    lvl3In = lvl3In % 3 + 1
                    msg = "{size}".format(size = lvl3In)
                    sys.stdout.write(msg)
                    sys.stdout.flush()
                elif (lvl2In == 2): #Choice sub
                    lvl3In = lvl3In % 4
                    if (lvl3In == 0 or lvl3In == 1):
                        msg = "{size}".format(size = 1)
                        sys.stdout.write(msg)
                        sys.stdout.flush()
                    else:
                        msg = "{size}".format(size = 2)
                        sys.stdout.write(msg)
                        sys.stdout.flush()
                    if (lvl3In == 0 or lvl3In == 2):
                        msg = "{bread}".format(bread = 1)
                        sys.stdout.write(msg)
                        sys.stdout.flush()
                    else:
                        msg = "{bread}".format(bread = 2)
                        sys.stdout.write(msg)
                        sys.stdout.flush()
                else: #Choice bowl
                    lvl3In = lvl3In % 2 + 1
                    msg = "{bread}".format(bread = lvl3In)
                    sys.stdout.write(msg)
                    sys.stdout.flush()
                #Kick to Toppings/Sauce menu
            elif (lvl1In == 2 or lvl1In == 3 or lvl1In == 5): #Update order, View 1, and Delete 1 all have the same input
                lvl2In = lvl2In % 10
                msg = "{index}".format(index = lvl2In)
                sys.stdout.write(msg)
                sys.stdout.flush()
            elif (lvl1In == 6): #Clear all
                lvl2In = lvl2In % 2
                msg = "{confirm}".format(confirm = lvl2In)
                sys.stdout.write(msg)
                sys.stdout.flush()
        elif (menu == 2): #Toppings/Sauce
            lvl1In = lvl1In % 5 + 1
            msg = "{cmd}".format(cmd = lvl1In)
            sys.stdout.write(msg)
            sys.stdout.flush()
            if (lvl1In == 1): #Add topping
                lvl2In = lvl2In % 4 + 1
                msg = "{typeChoice}".format(typeChoice = lvl2In)
                sys.stdout.write(msg)
                sys.stdout.flush()
                if (lvl2In == 1): #Cheese
                    lvl3In = lvl3In % 6
                    cheeses = ["Mozzarella", "Cheddar", "Parmesan", "Monterey", "Provolone", "Romano"]
                    msg = "{cheeseChoice}".format(cheeseChoice = cheeses[lvl3In])
                    sys.stdout.write(msg)
                    sys.stdout.flush()
                elif (lvl2In == 2): #Meat
                    lvl3In = lvl3In % 6
                    meats = ["Pepperoni", "All beef pepperoni", "Sausage", "Chicken", "Jerk Pork", "Ground Beef"]
                    msg = "{meatChoice}".format(meatChoice = meats[lvl3In])
                elif (lvl2In == 3): #Veggies
                    lvl3In = lvl3In % 8
                    veggies = ["Mushrooms", "Onions", "Olives", "Tomatoes", "Green Peppers", "Red Peppers", "Spinach", "Arugula"]
                    msg = "{veggChoice}".format(veggChoice = veggies[lvl3In])
            elif (lvl1In == 3): #Add sauce
                lvl2In = lvl2In % 2 + 1
                msg = "{typeChoice}".format(typeChoice = lvl2In)
                sys.stdout.write(msg)
                sys.stdout.flush()
                if (lvl2In == 1): #Add sauce
                    lvl3In = lvl3In % 8
                    sauces = ["Tomato", "Balsamic", "Italian", "Ceasar", "Ranch", "Lite Italian", "Lite Ceasar", "Lite Ranch"]
                    msg = "{sauceChoice}".format(sauceChoice = sauces[lvl3In])
            elif (lvl1In == 2 or lvl1In == 4): #Remove topping and Remove sauce have the same input
                lvl2In = lvl2In % 10
                msg = "{index}".format(index = lvl2In)
                sys.stdout.write(msg)
                sys.stdout.flush()
                msg = "{cancel}".format(cancel = 0) #Always end at the Topping/Sauce menu
                sys.stdout.write(msg)
                sys.stdout.flush()
        elif (menu == 3): #Finalize order
            lvl1In = lvl1In % 3 + 1
            msg = "{cmd}".format(cmd = lvl1In)
            sys.stdout.write(msg)
            sys.stdout.flush()
            if (lvl1In == 1): #Add another pizza
                lvl2In = lvl2In % 3 + 1
                msg = "{typeChoice}".format(typeChoice = lvl2In)
                sys.stdout.write(msg)
                sys.stdout.flush()
                if (lvl2In == 1): #Choice pie
                    lvl3In = lvl3In % 3 + 1
                    msg = "{size}".format(size = lvl3In)
                    sys.stdout.write(msg)
                    sys.stdout.flush()
                elif (lvl2In == 2): #Choice sub
                    lvl3In = lvl3In % 4
                    if (lvl3In == 0 or lvl3In == 1):
                        msg = "{size}".format(size = 1)
                        sys.stdout.write(msg)
                        sys.stdout.flush()
                    else:
                        msg = "{size}".format(size = 2)
                        sys.stdout.write(msg)
                        sys.stdout.flush()
                    if (lvl3In == 0 or lvl3In == 2):
                        msg = "{bread}".format(bread = 1)
                        sys.stdout.write(msg)
                        sys.stdout.flush()
                    else:
                        msg = "{bread}".format(bread = 2)
                        sys.stdout.write(msg)
                        sys.stdout.flush()
                else: #Choice bowl
                    lvl3In = lvl3In % 2 + 1
                    msg = "{bread}".format(bread = lvl3In)
                    sys.stdout.write(msg)
                    sys.stdout.flush()
                #Kick to Toppings/Sauce menu
            elif (lvl1In == 3): #Remove pizza
                lvl2In = lvl2In % 10
                msg = "{index}".format(index = lvl2In)
                sys.stdout.write(msg)
                sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Pizza_Ordering_System Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
