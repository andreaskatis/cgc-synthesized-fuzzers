## QuadtreeConways Fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/QuadtreeConways

## Application Information
QuadtreeConways simulates a simple space shooter type of game. The game takes place on an 8k by 8k board space, with 25 "runners" placed randomly around the board, each following the rules set out by Conway's Game of Life. During the game, the player can shoot at a position on the board, receiving 100 points per hit, or they can reveal the board and then place bombs on it. These bombs explode after 10 steps and give multiplicative score bonus based on how many runners the bomb hits. These options are presented to the player as a series of menus. The game runs for 10000 steps and the player can let it run via one of the menu options. Once the 10000 steps complete, the player is presented with a Game Over screen as well as their total score.

When the player first enters the game, it asks for a random positive number. This is likely used to seed a random number generator, but its purpose is not explicitly defined.

The first screen presented is for firing with the board hidden. The options are as follows:
1. Fire: Input an (x,y) coordinate. If valid, fire at the specified location.
2. Reveal: Reveal the board (by printing all the coordinates) and move to the bomb screen.
3. New Game: Restart the game.
4. Exit: Exit the application.

The next screen is for placing bombs with the board revealed. The options are as follows:
1. Place bomb: Input an (x,y) coordinate. If valid, place a bomb at the specified location.
2. Reveal: Reprint the board.
3. Run: Input a time in the range [100, 1000]. Iterate that many steps, and then return to the fire screen.
4. New Game: Restart the game. Move back to the fire screen.
5. Exit: Exit the application.

The game over screen appears once the total time has exceeded 10000 steps. The options are as follows:
1. New Game: Restart the game. Move back to the fire screen.
2. Exit: Exit the application

## Vulnerabilities
QuadtreeConways has 1 vulnerability.
1. When a bomb is triggered, the application tries to destroy every living cell in the blast radius. However, it doesn't check if the cell has been previously destroyed, and so if two bombs happen to destroy the same cell the program will try to destroy an already destroyed cell and will crash.

## Fuzzer Information
The fuzzer sends 4 ints, which the relay then converts into a useable message for the application. The use and expected ranges for the generated ints are as follows:

	Variable Name	Usage							Expected Range	Instances
	main		Represents which main command to send			[1, 5]		1
        xCoord          Represents the x coordinate of a shot or bomb command	[0, 8200]	1
        yCoord          Represents the y coordinate of a shot or bomb command	[0, 8200]	1
        time            Represents the amount of time to run the simulation	[100, 1000]	1

The relay always starts by sending main as the initial command
	If main == 1: Send the coordinates as (x,y)
	If main == 3: Send the time value
