## Palindrome fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/Palindrome

## Application information
Palindrome is a simple application that tests whether or not a given string is a palindrome, returning yes or no depending on the result.

## Vulnerabilities
Palindrome has one vulnerability.
1. The application reads in the given string into a 64-byte buffer, meaning it can process 128 chars at once. However, there are no checks in place to ensure that the given string is less than or equal to 128 chars. If the given string exceeds that (>128 chars), the application experiences a buffer overflow and crashes.

## Fuzzer information
The fuzzer sends 201 ints, which the relay then converts into an expression readable by the application. The first int is used as a length limiter, and the other 200 represent individual chars of the string.

The relay then takes these values, creates a string 200 chas long and truncates it to the length given by the fuzzer before sending it to the application.

Due to the way the relay functions, the fuzzer need only send 201 ints within the range [INT_MIN, INT_MAX]. The relay takes the generated integer and manipulates them (primary using modulo) into the required range for the application.

## Running the fuzzer
The fuzzer files must be named palindrome.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.