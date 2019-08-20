##A_Game_of_Chance fuzzer

##Application information
A_Game_of_Chance simulates a simple card game. The deck is reduced to only the number cards (2-10) and to win a round, a player must simply hold the highest sum total card pair. In a round, each player is dealt two cards, with a round of betting after each card is dealt. After the second round of betting, the cards are revealed and whichever player wins takes all of the bets. The user interacts with the application via the dealer, and is able to supply a new deck, deal a round, get round data (such as who won and what the bets of each player were), get the remaining balance of each player, get the player count, and quit the application.

##Vulnerabilities
A_Game_of_Chance has one vulnerability, detailed below
1. Players determine what amount they bet based on pointers to a flag page, a collection of bytes that is meant to be kept secret. However, the players move their flag page pointers in a predictable fashion based on whether they won or lost the round. Because of this, a malicious user would be able to keep track of players individual bets (ie, the indices of the flag page) in order to eventually build a complete picture of the flag page, constituting an information leakage vulnerability

##Fuzzer information
The fuzzer sends 258 ints, which the sender then translates into a message for the application. One int is used to determine which command to issue to the application, a second is used to determine the size of the deck (should the new deck command be called), and the other 256 each represent a single card in the deck.

The relay then takes these variables and sends a predefined command to the application. If the command corresponds to new deck, the relay will then send the size of the deck (supplied in a hex code in little endian), and then will truncate the list of cards to that size and send them to the application. If the command corresponds to anything other than new deck, the relay will simply send the command by itself.

The size of the deck is restricted to a maximum of 256 cards due to both scalability issues with the fuzzer implementation and difficulty in understanding exactly how the application accepts input. Additionally, the relay contains checks to ensure that all integers are within expected parameters. Thus, the fuzzer need only send 258 random integers in order to function.

##Running the fuzzer
The fuzzer files must be named agameofchance.c in order to build properly. Run the make file found in the build folder. Once the build process is complete, run fuzz.sh in the bin folder.

