## Dive_Logger fuzzer

## Application information
Dive_Logger provides an interface for a single diver to record both information about themself and information on the various dives that they have performed, as well as download edit, print, and remove dive logs. The application stores the divers full name, address (street, city, state, and ZIP code), phone number, PADI diver number, and PADI certification date. The information that the application stores on the dives that the diver has performed includes the site, date, time, location, max and average depth, duration, O2 percentage, pressure in, and pressure out.

The application presents a menu with eight options: Change diver info, Log a new dive, Download dive data, Edit dives, Print dive logs, Remove dives, Diver statistics, and Exit application. Change diver info and log new dive simply request the user for the information that the application normally stores on the diver and the dives, respectively. Download dive data requires at least 32 hex values (received four at a time) before being terminated by the hex string "\x00\x00\x00\x00", at which point the application acts as though log new dive had been selected. Print and Remove dives both present an indexed list of logged dives (starting at 1). If the user chooses a valid index, the application prints or removes that dive, respectively. Edit dives also requires an index, and if valid, acts as though log new dive had been chosen. Diver statistics simply presents various statistics on the diver and requires no further user input. Exit application exits the application.

## Vulnerabilities
Dive_Logger has two vulnerabilities:
1. The application is able to store a maximum of 128 dives at once, and there are checks to ensure that the user cannot log more than that manually. However, the download dive function bypasses these checks, allowing the user to have 128 dives and still download another dive, exceeding the maximum dive limit. If the user then calls edit, print, or remove dives, the application will crash.
2. Time values for dives are entered as a string in the format "hr:mn:sc" before being processed and sanitized. The application checks the upper bound of the time value, but has no checks for the lower bound, allowing even extremely large negative values for time. The application then stores the time in a string buffer of a fixed size. If the time values are large enough (all three values are negative integers having at least eight digits), the string buffer will overflow and the application will crash.

## Fuzzer information
The fuzzer sends 556 ints, which the relay then converts into an expression suitable for the application. 500 ints are used as ascii converted chas for five different strings, and another five ints are used to limit the lengths of those strings. One int is used as the main menu command, three ints are used to represent the month, day, and year of a date value, 32 are used to represent the 32 hex values required by the download dive function, and one is used as an index value. Another three ints are used to represent the ZIP code, phone number, and PADI number in the change diver info function, and the last nine ints are used to represent the various information required by the log new dive function.

Due to the large amount of varying input the application requires for each different command, fuzzed values are reused where possible. Specifically, two strings and the date value are shared between the change diver info and log new dive, and the index value of edit, print, and remove dives are shared.

The relay always sends the main menu command and then determines what to send based on that value.

If main is 0 (change diver info) or 1 (log new dive), the relay will send the information that the application requests about for the specific command.

If main is 2 (download dive), the relay splits the hex values into eight sets of four consecutive values, sends the eight sets separately, then sends "\x00\x00\x00\x00" at which point the relay acts as though log new dive had been selected.

If main is 3 (edit dives), 4 (print dive), or 5 (remove dive), the relay sends the index value. If edit dives was selected, the relay then acts as though log new dive had been selected.

The relay contains checks to ensure that the values given are within acceptable ranges. Thus, the fuzzer need only send 556 ints in order to function.

## Running the fuzzer
The fuzzer files must be named dive_logger.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.