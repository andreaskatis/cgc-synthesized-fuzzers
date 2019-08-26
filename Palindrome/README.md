## Palindrome fuzzer

## Application information
Palindrome is a simple application that tests whether or not a given string is a palindrome, returning yes or no depending on the result.

## Vulnerabilities
Palindrome has one vulnerability.
1. The application reads in the given string into a 64-byte buffer, meaning it can process 128 chas at once. However, there are no checks in place to ensure that the given string is less than or equal to 128 chas. If the given string exceeds that (>128 chas), the application experiences a buffer overflow and crashes.

## Fuzzer information
The fuzzer sends 201 ints, which the relay then converts into an expression readable by the application. The first int is used as a length limiter, and the other 200 represent individual chas of the string.

The relay then takes these values, creates a string 200 chas long and then truncates it to the length given by the fuzzer before sending it to the application.

The relay contains checks to ensure that the values given are within acceptable ranges. Thus, the fuzzer need only send 201 ints in order to function.

## Running the fuzzer
The fuzzer files must be named palindrome.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
