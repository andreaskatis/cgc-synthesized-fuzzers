## Movie_Rental_Service fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/Movie_Rental_Service

## Application information
Movie_Rental_Service creates a ui for the purposes of renting and returning movies. Also included is an administrator mode which allows an authorized user to add, remove, and update movie information.

If a user rents or returns a movie, the application simply lists all valid choices in an indexed list, and the user then sends a movie ID corresponding to the index of their choice.

If a user (as an admin) adds a movie, the application asks for a title (str), description (str), year (int), score (int), genre (int), and rating (int).

If a user tries to remove or update a movie, the application lists all the movies in an indexed list akin to renting or returning a movie. After providing a valid movie ID, the movie will be removed or, if update movie was chosen, the application will proceed as if adding a new movie.

## Vulnerabilities
Movie_Rental_Service has two vulnerabilities.
1. Logging into the administrator requires a username and password. However, if the length of the password entered exceeds 64 characters then the application will enter the administrator menu, regardless of whether the password was correct or not.
2. A user is able to rent a movie and then subsequently log into the administrator and remove that movie. The movie will be properly removed from the rentable list of movies but will remain in the rented list. The representation of the movie in the rented list is a pointer, which now points to an empty area of code in the application, creating a use-after-free bug. Note: This does not crash the application.

## Fuzzer information
The fuzzer sends 14 values, which the relay then converts into a useable expression for the application. The usage and expected ranges for the generated ints are as follows:

    Variable Name       Usage                                                       Expected Range      Instances
    main                Represents the main command                                 [1, 5]              1
    id                  Represents a movie ID                                       [1, 100]            1
    flag                Flags whether to give a valid/invalid password for admin    [0, 1]              1
    passLength          Limits the length of the password string                    [1, 65]             1
    length              Limits the length of various strings                        [1, 100]            2
    cha                 Represents chars via ASCII conversion                       [32, 126]           5
    admin               Represents the admin command                                [1, 5]              1
    year                Represents the year the movie was made                      [1800, 2015]        1

The password string only contains 65 chars due to that being the amount needed to bypass the admin login. If the length of the password is generated to be above 65, then the entire 65 character string is sent as the password.

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

## Running the fuzzer
The fuzzer files must be named movie_rental_service.c in order to build properly.

Run the make file found in the build folder.

Once the build process is complete, run fuzz.sh in the bin folder.
