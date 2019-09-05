## Material_Temperature_Simulation fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/Material_Temperature_Simulation

## Application information
Material_Temperature_Simulation simulates the temperature within various materials. The application already contains three preprogrammed materials, as well as an option to create a custom material. If the custom option is chosen, the user must provide thermal and heat capacities for the material, which both have the same prompts: An initial int (of any value) and another seven ints, each within 25% of the previous int (eg, if the first int is 4, the second must be 3-5). Afterwards, the applications behaves as though the user had chosen one of the preprogrammed materials.

The user must provide the dimensions of the material, choose whether the material is isothermic (and provide either a single or an arbitrary number of temperatures for a yes/no, respectively), choose whether there is a constant energy source (providing an arbitrary number of temperatures if so), and a runtime in seconds. Once all the information is provided, the simulation begins and advances by 10 seconds every time the user presses the enter button until the simulation finishes, at which point the application ends.

## Vulnerabilities
Material_Temperature_Simulation has two vulnerabilities.
1. Data on the material is stored in a 3-Dimensional array, and space for the array is allocated according to x*y*z*sizeof(double). The size for this calculation is stored on a 32-bit unsigned int which can overflow, resulting in a size allocation smaller than necessary. Once the application attempts to read from space beyond the allocation, the application will crash.
2. Normally, thermal conductivity is expected to be positive. However, there is no check to confirm this when creating a custom material, allowing the user to input negative thermal conductivities. This causes heat to flow from lower heat values to higher heat values, an impossibility in real world physics. The application also limits the heat of a specific material to 373 degrees Celsius. However, because of the previous exploit, the temperature in a specific area of a custom material can rise above 373 degrees Celsius, crashing the application.

## Fuzzer information
The fuzzer sends 225 ints, which the relay then converts into a useable expression for the application. One int is used to choose the material (one of the preprogrammed materials or a custom one), 16 ints are used as the values for the thermal and heat capacities of the custom material, three are used as the dimensions of the material, two are used as flags for the isothermic and constant energy source choices, two are used to choose how many temperatures to send for isothermic and constant energy sources, 200 are used as the temperatures values for the isothermic and constant energy sources, and one is used for the runtime of the simulation.

Due to the restrictions on thermal and heat capacity values, the fuzzer only generates the first int. Afterwards, the fuzzer generates ints between 75-125, and the relay uses those as percentage values to calculate the next value in the sequence for capacities by multiplying it with the previous value.

    The relay always begins by sending the material. If material == 4, the relay sends the values for a custom material.

        First, the eight values for thermal capacity and then the eight values for heat capacity.

    The relay then sends the dimensions of the material in x,y,z format.

    The relay then sends y/n based on the isothermic flag (0 = y, 1 = n).

        If yes, the relay only sends the first temperature value.

        If no, the relay sends the first n temperature values, where n is a generated number between 1 and 100 provided by the fuzzer.

    The relay then sends y/n based on the isothermic flag (0 = y, 1 = n).

        If yes, the relay sends the first n temeprature values, where n is a generated number between 1 and 100 provided by the fuzzer.

        If no, the relay sends nothing.

    The relay finally sends the runtime, and sends a newline command runtime / 10 times.

Due to the way the relay functions, the fuzzer need only send 225 ints within the range [INT_MIN, INT_MAX]. The relay takes the generated integer and manipulates them (primary using modulo) into the required range for the application.

## Running the fuzzer
The fuzzer files must be named material_temperature_simulation.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
