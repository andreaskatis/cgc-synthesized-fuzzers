## Email_System_2 Fuzzer

## Application information
Email_System_2 creates a system to create user accounts, and log in to those accounts to create, view, send, and delete drafts, as well as to list received messages. Each account can only hold 20 drafts at a time, and must either send or delete drafts in order to create more.

## Vulnerabilities
Basic_Messaging has two vulnerabilities.
1. Normally, each user can't create more than four messages per login, and can only hold 20 messages at a time. However, the user can repeatedly log in, create messages, and log out until they have more than 21 messages. Because the messages are stored in a 2D array (with one axis as the user and the other as the messages), if the final user is signed in, the newest message will overflow the array, which overwrites the "printer" function pointer, causing a crash a the next print call (such as view drafts).
2. If a user creates exactly 20 messages, logs out, and then intentially fails their login three times in a row, the application allows login with any password on the fourth attempt. If the user then creates another message, the message array overflows causing the same crash as in the first vulnerability.

## Fuzzer information
The fuzzer sends 206 ints, which the sender then categorizes into each of the elements that the application calls for. Two ints are used as command inputs (main and user), two ints are used to limit the lengths of the username and password, 200 ints (100 each) are used to represent the various characters of the string, one is used to represent the message ID, and one is used as a flag to determine whether or not to pass a valid password on login attempt.

Due to the range of possible usernames and passwords, the relay keeps an array of used usernames and their corresponding passwords to refer to when in the process of interacting with the application.

The relay takes these variables and converts them into a message for the application following these rules:

Send main as the initial command

If main == 1: Send the generated username and password, update the corresponding arrays in the relay

If main == 2:

	If index1 > userArr.length: Send the generated username and password (invalid username login attempt)

	If flag == 1: Send userArr[index1] and the generate password (valid username with invalid password)

	If flag == 0: Send userArr[index1] with the corresponding password (valid login attempt), then send the user command

		If user == 1:

			If index2 > userArr.length: Send the generated username and password (send message to invalid user) then logout

			Else: Send userArr[index1] and the generated password (send random message to valid user) then logout

		If user == 2 or 6: Send the message ID then logout

		If user == 3, 4, or 5: Logout

		If user == 7: Do nothing

		If user == 8: Clear the username and password arrays

If main == 3: Clear the username and password arrays

Additionally, the relay contains checks so as to ensure that all integers are within expected parameters. Thus, the fuzzer need only send 206 randomly generated integers in order to function.

## Running the fuzzer
The fuzzer files must be named email_system_2.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
