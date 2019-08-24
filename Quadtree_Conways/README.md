## Movie_Rental_Service fuzzer

## Application information
Quadtree_Conways simultes a "space shooter" style of game based on Conway's game of life. The game takes place on an 8192X8192 board, and at the start of the game the application creates 25 "runners" (which follow the rules laid out in Conway's game of life). The player then can shoot at runners, reveal the board (which unlocks the bomb and run options), bomb a specific location (bombs explode after 10 steps, destroying a 3X3 square centered on the bomb), and run the simulation for some amount of steps. Once the simulation has been run, the board is hidden once again and the player is returned to the firing screen. The game lasts a total of 10000 steps, at which point the player is booted to the game over screen and is given the option to start a new game or exit the application.

## Vulnerabilities
Quadtree_Conways has one vulnerability.
1. If two bombs are placed such that their explosions overlap, the application improperly handles the destruction of a single cell multiple times, causing the application to crash.

## Fuzzer information
The fuzzer sends four ints, which the relay then converts into a useable message for the application. One int is used as the command, two ints are used as the x and y coordinates, and one int is used as a runtime value. The relay was configured in this fashion (as opposed to attempting to fuzz an entire run of the game) due to the enormous amount of possible messages and the consistent nature of the input requests at all stages of the game.

The relay always sends the command int, then, based on that, decides whether to send the coordinates, the runtime value, or nothing. If the command int is 1, the relay sends the coordinates (formatted as x,y) and if the command int is 3, the relay sends the runtime value.

The relay contains checks to ensure that the values given are within acceptable ranges. Thus, the fuzzer need only send 4 ints in order to function.

## Running the fuzzer
The fuzzer files must be named quadtree_conways.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
