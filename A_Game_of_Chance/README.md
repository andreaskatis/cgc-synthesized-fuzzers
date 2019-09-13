## A_Game_of_Chance fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/A_Game_of_Chance

## Application information
A_Game_of_Chance simulates a simple card game. The deck is reduced to only the number cards (2-10) and to win a round, a player must simply hold the highest sum total card pair. In a round, each player is dealt two cards, with a round of betting after each card is dealt. After the second round of betting, the cards are revealed and whichever player wins takes all of the bets.

The user interacts with the application via the dealer, and is able to supply a new deck, deal a round, get round data (such as who won and what the bets of each player were), get the remaining balance of each player, get the player count, and quit the application.

Note that there is some unexpected behavior when submitting deck size. When reading a deck size of 127 or less, the application behaves as expected. However, when the deck size exceeds 127, the application processes it as a significantly larger number (upwards of 30,000). It is unknown why this happens, as this behavior is not documented in the original application README. It is suspected that there may be some conversion error between signed and unsigned integers by the application or the server. Because of this behavior, it was decided to limit the deck size of the fuzzer to less than or equal to 127.

## Vulnerabilities
A_Game_of_Chance has one vulnerability
1. Players determine what amount they bet based on pointers to a flag page, a collection of bytes that is meant to be kept secret. However, the players move their flag page pointers in a predictable fashion based on whether they won or lost the round. Because of this, a malicious user is able to keep track of players individual bets (ie, the indices of the flag page) in order to eventually build a complete picture of the flag page, constituting an information leakage vulnerability. Note: At no point does the application crash.

## Fuzzer information
The fuzzer sends 129 ints, which the relay then converts into a readable expression for the application. The usage and expected ranges for the generated ints are as follows:

    Variable Name       Usage                                                   Expected Range      	Instances
    cmd                 Represents which command to send to the application     [0, 4]			1
    size                Represents the size of the deck                         [1, 127]		1
    card                Represents a card in the deck                           [0, 8]			127

The card value range is limited to [0, 8] instead of the [2, 10] that the application expects to simplify processing in the relay.

The relay then takes these variables and sends a predefined command to the application.

    If the command corresponds to new deck, the relay will then send the size of the deck (supplied in as a hex code in little endian), and then will truncate the list of cards to that size and send them to the application.
    If the command corresponds to anything other than new deck, the relay will simply send the command by itself.

## Running the fuzzer
The fuzzer files must be named agameofchance.c in order to build properly.

Run the make file found in the build folder.

Once the build process is complete, run fuzz.sh in the bin folder.
