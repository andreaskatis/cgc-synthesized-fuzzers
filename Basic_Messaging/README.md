## Basic_Messaging fuzzer

## Application information
Basic_Messaging creates a ui that allows a user to create accounts within a messaging service and login to those accounts to send, read, list, and delete messages between them.

## Vulnerabilities
Basic_Messaging has one vulnerability.
1. Whenever one logs into an account, all unread messages are displayed. If the number of unread messages exceeds 255, the application crashes.

## Fuzzer information
The fuzzer sends 106 ints, which the sender then categorizes into each of the elements that the application calls for. Two ints are used as command inputs (main and user), one int is used to limit the length of the string, 100 ints are used to represent the chars of said string, two ints are used as index pointers, and one int is used as a message id.

Due to the range of possible usernames, the relay keeps an array of used usernames to refer to when in the process of interacting with the application.
The relay takes these variables and converts them into a message for the application following these rules:
Send main as the initial command
If main == 1: Pass the general string as a username, update the username array with the new username
If main == 2: Check the first index value
	If the index is within the username array: Pass the corresponding username, send the user command
		If user == 1: Check the second index value
			If the index is within the username array: Pass the corresponding username, send the general string
			Else: Send the general string
		If user == 2 or 4: Send the message ID
		If user == 6: Clear the usernames array
		Logout of user (send 5)
	Else: Send the general string
If main == 3: Clear the usernames array

Additionally, the relay contains checks so as to ensure that all integers are within expected parameters. Thus, the fuzzer need only send 106 randomly generated integers in order to function.

## Running the fuzzer
The fuzzer files must be named basic_messaging.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
