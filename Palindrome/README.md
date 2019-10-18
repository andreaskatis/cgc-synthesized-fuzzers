## Palindrome fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/Palindrome

## Application information
Palindrome is a simple application that tests whether or not a given string is a palindrome, returning yes or no depending on the result.

There is another application, Palindrome2, which functions identically to Palindrome. Palindrome takes the same inputs, gives the same output, and has the same vulnerability as Palindrome. Due to this, Palindrome2 is not presented as its own application.

## Vulnerabilities
Palindrome has one vulnerability.
1. The application reads in the given string into a 64-byte buffer, meaning it can process 128 chars at once. However, there are no checks in place to ensure that the given string is less than or equal to 128 chars. If the given string exceeds that (>128 chars), the application experiences a buffer overflow and crashes.

## Fuzzer information
The fuzzer begins with the empty string, changing it with each new test considering three available options. The first option adds a new random character to the string at a random location. The second option changes an existing character to random one, at a random location. Finally, the third option deletes a character at a random location.

    Variable Name       Usage                                           Expected Range      Instances
    cha              	chosen ASCII character			                [32, 126]            1
    option              add/change/remove character     				[1, 3]           	 1
    location			location of character in string					[0, +∞]				 1


## Running the fuzzer
The fuzzer files must be named Palindrome.c in order to build properly.

Run the make file found in the build folder.

Once the build process is complete, run fuzz.sh in the bin folder.
