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
We decided not to use this application originally, so I don't have a specific fuzzer specification. However, it should work almost identically to the Email_System_2 fuzzer. Below is a cursory list of the required fuzzing variables along with a basic outline of how the fuzzer should work.

	Variable Name	Usage
	main		Represents which main command to send
	username	Represents a randomized username (likely a single random cha or a randomized str)
	password	Represents a randomized password (same process as username)
	flag		Whether or not to send valid input to login prompts
	userIdx		Which user to log in upon successful login flag
	cmd		Represents which user/admin command to send in the event that we log into admin/user menus
	index		Represents an index for the various prompts which require one (such as send message or delete message)

Similarly to Email_System_2, the relay will need to keep an array of usernames and their corresponding passwords to refer to when fuzzing the application.
