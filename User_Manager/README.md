## User_Manager Fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/User_Manager

## Application Information
User_Manager simulates a messaging service capable of creating and storing multiple users each with their own password and "inbox" of messages. User_Manager also has an admin menu, accessed by logging in to admin with the password "$admin$77" which can display all the users present and is able to delete or change the password of specific users.

Upon entering the application, the user is presented with a main navigation screen containing 4 options.
1. Creating a new user prompts for a username and password. If the username already exists, the process gives an error message. Otherwise, the new user will be created and stored. In either case, the application will return to the main navigation screen.
2. Logging in asks for a username and password. If a valid combination is given, the application moves to the user screen. Otherwise, the application kicks back to the main navigation screen.
3. Admin log in requests a password. If "$admin$77" is given, the application moves to the admin screen, otherwise, it will kick back to the main navigation screen.
4. Exit will exit the application.

The user screen has 6 options.
1. Send message will ask for a username and (if they exist) will prompt for a message to send to that user. Note that messages to yourself are valid. If the user does not exist, it will simply return to the user screen.
2. Read message will list the last unread message and then ask for a number. User messages are stored in a 0 indexed list in order of time received. Entering a valid number or a valid username will display the corresponding message, then return to the user screen. An invalid entry will simply kick back to the user screen.
3. List message will simply display all messages order by time received.
4. Delete message asks for a message number identically to read message. If a valid number is given, the corresponding message will be deleted. Otherwise, the application will simply give a "message not found" error.
5. Logout returns to the main navigation screen.
6. Exit will exit the application.

The admin screen has 4 options.
1. List users will list all users in a 0 indexed list.
2. Delete user will ask for a username and, if valid, will delete that user.
3. Change user password asks for a username and, if they exist, asks for a new password which is then associated with that user. If the username does not exist, the application simply returns to the admin screen.
4. Logout returns to the main navigation page.

## Vulnerabilities
User_Manager has 1 vulnerability.
1. A user's unread messages are tracked via linked list. Each user stores a pointer to the initial unread message, which then links to the remainder of the unread messages. However, a user can delete the first message in the list without reading it, causing a use-after-free error when the user next tries to read a message. Note that this does not appear to crash the application.

## Fuzzer Information
The fuzzer sends 7 ints, which the relay then converts into a useable message for the application. The use and expected ranges for the generated ints are as follows:

	Variable Name	Usage								Expected Range	Instances
	main		Represents which main command to send				[1, 4]		1
	username	Single randomized cha using ASCII conversion			[32, 126]	1
	password	Single randomized cha using ASCII conversion			[32, 126]	1
	flag		Whether or not to send valid input to login prompts		[0, 1]		1
	userIdx		Which user to log in upon successful login flag			[0, +∞)		1
	cmd		Represents which user/admin command to send			[0, 11]		1
	index		Represents an index for the various prompts which require one	[0, +∞)		1

Similarly to Email_System_2, the relay will need to keep an array of usernames and their corresponding passwords to refer to when fuzzing the application. Because of this, the relay uses a modulo function to limit the index values to userArr.len + 1.

The relay always starts by sending main as the initial command
	If main == 1: Send the generated username/password and update the corresponding arrays
	If main == 2:
		If userIdx > userArr.length: Send the generated username/password (invalid login)
		Else: Send the username associated with the given index
			If flag == 1: Send the generated password (invalid login)
			Else: Send the password associated with the given index (valid login)
				Send cmd % 6 + 1 for the user menu choices
				If cmd == 1:
					If index > userArr.length: Send the generated username (invalid recipient)
					Else: Send the username associated with the index
					      Send the generated password as the message
					Logout
				If cmd == 2 or 4: Pass index as the message ID and logout
				If cmd == 3: Do nothing and logout
				If cmd == 5: Do nothing (command already logs out)
				If cmd == 6: Clear the username/password arrays
	If main == 3:
		If flag == 1: Send the generated password (invalid admin login)
		Else: Send "$admin$77" (valid admin login)
			Send cmd % 4 + 1 for the admin menu choices
			If cmd == 1: Do nothing and logout
			If cmd == 2:
				If index > userArr.length: Send the generated username (invalid user)
				Else: Send the username associated with the given index
				      Remove the associated username/password from their list
				Logout
			If cmd == 3:
				If index > userArr.length: Send the generated username (invalid user)
				Else: Send the username associated with the given index
				      Send the generated password
				      Update the password associated with the given index to be the new password
				Logout
			If cmd == 4: Do nothing (command already logs out)
	If main == 4: Clear the username/password arrays
