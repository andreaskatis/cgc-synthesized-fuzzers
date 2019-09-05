## Palindrome fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/Palindrome

## Application information
Palindrome is a simple application that tests whether or not a given string is a palindrome, returning yes or no depending on the result.

There is another application, Palindrome2, which functions identically to Palindrome. Palindrome takes the same inputs, gives the same output, and has the same vulnerability as Palindrome. Due to this, Palindrome2 is not presented as its own application.

## Vulnerabilities
Palindrome has one vulnerability.
1. The application reads in the given string into a 64-byte buffer, meaning it can process 128 chars at once. However, there are no checks in place to ensure that the given string is less than or equal to 128 chars. If the given string exceeds that (>128 chars), the application experiences a buffer overflow and crashes.

## Fuzzer information
The fuzzer sends 201 ints, which the relay then converts into an expression readable by the application. The usage and expected ranges of the generated ints are as follows:

    Variable Name       Usage                                           Expected Range      Instances
    length              Limits the length of the string                 [1, 200]            1
    cha                 Represents the chars using ASCII conversion     [32, 126]           200

The relay then takes these values, creates a string 200 chas long and truncates it to the length given by the fuzzer before sending it to the application.

## Running the fuzzer
The fuzzer files must be named palindrome.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.