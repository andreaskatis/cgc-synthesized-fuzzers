## Movie_Rental_Service fuzzer

## Application information
Movie_Rental_Service creates a ui for the purposes of renting and returning movies. Also included is an administrator mode which allows an authorized user to add, remove, and update movie information.

## Vulnerabilities
Movie_Rental_Service has two vulnerabilities.
1. Logging into the administrator requires a username and password. However, if the length of the password entered exceeds 64 characters then the application will enter the administrator menu, regardless of whether the password was correct or not.

2. A user is able to rent a movie and then subsequently log into the administrator and remove that movie. The movie will be properly removed from the rentable list of movies but will remain in the rented list. The representation of the movie in the rented list is a pointer, which now points to an empty area of code in the application, creating a use-after-free bug.

## Fuzzer information
The fuzzer sends 276 ints, which the sender then categorizes into each of the elements that the application calls for. Two ints are used as command inputs (main and admin), one is used to represent a movie ID, one is used to represent a flag (which determines whether or not to login as admin or as a random user), three are used to represent the sizes of various strings, 265 are used to represent the characters of said strings, and four are used to represent various information about movies used in the add and update movie commands.

The relay takes these variables and converts them into a message for the application following these rules:
Send main as the initial command
If main == 2 or 3: Send the movie ID
If main == 4 and admin login flag is set to true: Send "admin" followed by the password string
	If the length of password is > 64: Send the admin command
		If admin == 1: Send title string, description string, year int, score int, genre int, and rating int
		If admin == 2: Send the movie ID
		If admin == 3: Send the movie ID followed by the same information as admin == 1
		Logout of admin (send 4)
If main == 4 and admin login flag is set to false: Send the password string as the username

Additionally, the relay contains checks so as to ensure that all integers are within expected parameters. Thus, the fuzzer need only send 276 randomly generated integers in order to function.

## Running the fuzzer
The fuzzer files must be named movie_rental_service.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
