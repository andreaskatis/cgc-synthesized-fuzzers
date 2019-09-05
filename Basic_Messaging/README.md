## Basic_Messaging fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/basic_messaging

## Application information
Basic_Messaging creates a UI that allows a user to create accounts within a messaging service and login to those accounts to send messages to other users and read, list, and delete messages sent to them.

## Vulnerabilities
Basic_Messaging has one vulnerability.
1. Whenever one logs into an account, all unread messages are displayed. If the number of unread messages exceeds 255, the application crashes.

## Fuzzer information
The fuzzer sends 106 ints, which the relay then converts into a readable expression for the application. The use and expected ranges for the generated ints are as follows:

    Variable Name       Usage               Expected Range
    test

Due to the range of possible usernames, the relay keeps an array of used usernames to refer to when in the process of interacting with the application.

The relay takes these variables and converts them into a message for the application following these rules:

    Send main as the initial command
    If main == 1: Pass the general string as a username, update the username array with the new username
    If main == 2: Check the first index value
    	If index1 < userArr.length: Pass the corresponding username, send the user command
    		If user == 1: Check the second index value
    			If index2 < userArr.length: Pass the corresponding username, send the general string
    			Else: Send the general string
    		If user == 2 or 4: Send the message ID
    		If user == 6: Clear the usernames array
    		Logout of user (send 5) if anything other than 5 or 6 was selected
    	Else: Send the general string
    If main == 3: Clear the usernames array

## Running the fuzzer
The fuzzer files must be named basic_messaging.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
