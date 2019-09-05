## Basic_Messaging fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/basic_messaging

## Application information
Basic_Messaging creates a UI that allows a user to create accounts within a messaging service and login to those accounts to send messages to other users and read, list, and delete messages sent to them.

If the user wishes to send a message, they must first submit the name of another user. If that user exists, the application then asks for a message to send to them. If the given user does not exist, the command simply terminates back to the user menu.

If the user chooses to read or delete a message, the application lists all the messages the user has in an indexed list (beginning at 1). The user then gives a message ID corresponding to the index. If it is a valid ID, the application then displays or deletes the chosen message.

## Vulnerabilities
Basic_Messaging has one vulnerability.
1. Whenever one logs into an account, all unread messages are displayed. If the number of unread messages exceeds 255, the application crashes.

## Fuzzer information
The fuzzer sends 106 ints, which the relay then converts into a readable expression for the application. The use and expected ranges for the generated ints are as follows:

    Variable Name       Usage                                       Expected Range                      Instances
    main                Represent which main command to send        [1, 3]                              1
    length              Limit the length of the input string        [1, 100]                            1
    cha                 Represents chars using ASCII conversion     [32, 126]                           100
    index               Refers to an index in the user array        Unconstrained positive integer      1
    user                Represent which user command to send        [1, 6]                              1
    id                  Represents a specific message ID            [1, 255]                            1

Due to the range of possible usernames, the relay keeps an array of used usernames to refer to when in the process of interacting with the application. Because of this, the relay uses a modulo function to limit the index values to userArr.length + 1.

The relay takes these variables and converts them into a message for the application following these rules:

    Send main as the initial command
    If main == 1: Pass the general string as a username, update the username array with the new username
    If main == 2: Check the first index value
    	If index1 < userArr.length: Pass the corresponding username, send the user command
    		If user == 1: Check the second index value
    			If index2 < userArr.length: Pass the corresponding username, send the general string. Logout
    			Else: Send the general string. Logout
    		If user == 2 or 4: Send the message ID. Logout
    		If user == 6: Clear the usernames array
    	Else: Send the general string
    If main == 3: Clear the usernames array

## Running the fuzzer
The fuzzer files must be named basic_messaging.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
