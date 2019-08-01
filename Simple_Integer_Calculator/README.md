## Simple_Integer_Calculator fuzzer

## Application information
Simple_Integer_Calculator is a simple calculator, capable of performing integer addition (add, +), subtraction (sub, -), multiplication (mul, *), division (div, /), modulus (mod, %), and equality (equals, ==), along with manipulation of strings and booleans. Along with the previous functions, the Simple_Integer_Calculator is capable of the length (len), type (type), and int cast (int) operations, as well as variable definition (var) and subsequent use.

## Vulnerabilities
The Simple_Integer_Calculator has four vulnerabilities, three of which are exposed by this particular fuzzer.
1. The user is able to redefine calculator commands via the var functionality. If the written command is then called, the application treats it as a variable instead of the command. However, if the symbolic command is called, the application crashes.
Example: var add = 2 (valid input)
         2 add 3 returns 3 (treating add as a var, the application prints the right most operand)
         2 + 3 crashes

2. Simple_Integer_Calculator splits inputs into two categories, functions (such as add or *) and operands (the ints, str, bools, and vars). If a single input contains more than 32 of either, the application crashes.
Example: 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 2 + 2 crashes
         Though there are only 17 functions, there are 34 operands, causing the crash

3. If the user calls the var command with no arguments, the application crashes.
Example: var crashes

4. The user is able to call the multiply function with str and int (str * int). In this case, the Simple_Integer_Calculator will simply repeat the string x many times and return the repeated string. Depending on the length of the string and size of the int, the application can crash. This is the vulnerability that the fuzzer is unable to expose, due to the fuzzer limiting the length of the input string.

## Fuzzer information
The fuzzer sends 290 ints, which the sender then categorizes into various expressions. One int is used as the length count, while the other 289 are split into 17 expressions with 17 ints per expression. Each expression has one int for the command (add, mul, etc), two ints representing the type (int, str, bool) of the front and back operand, two ints representing the front and back operand, six ints representing the six chars of the front string, and six ints representing the six chars of the back string.
msg = [length, expr * 17]
expr = [typeF, operF, strCharF, cmd, typeB, operB, strCharB]
strChar = [cha1, cha2, cha3, cha4, cha5, cha6]

The relay then takes these variables and converts them into a message for the application following these rules:
If cmd != 15: Format the expression as OPERF CMD OPERB
If the type is 0: Send an int
    Use operF as is
If the type is 1: Send a boolean
    If operF is even (operF % 2 == 0), send True. Otherwise, send False
If the type is 2: Send a string
    Take the six ints of the str and convert them into ASCII via the chr() command and append them into a single string.
    Use the oper int % 6 as the length of the string (ie if operF % 6 == 2, send only the first 2 characters of the string)
    Send the resultant string surrounded by quotation marks
If the type is 3: Send a variable
    Procedure is identicle to if type is 2, but omit the quotation marks
Perform this procedure for both the front and back operands
Use the cmd integer to determine which function to use (0 is add, 1 is mul, etc)

If cmd == 15: Format the expression as the declaration of a variable
    Treat operF as though type is 3
    Treat operB as normal, but omit the variable option (type is 0-2 instead of 0-3)

Convert each of the expressions using this method, labelling each sequentially (exp1, exp2, etc)
Append (length) number of expressions into one string, separated by spaces (ie if length == 2, use 2 expressions)
Send the string to the application as an input

Additionally, the relay contains checks so as to ensure that all integers are within expected parameters. Thus, the fuzzer need only send 290 randomly generated integers in order to function.

## Running the fuzzer
The fuzzer files must be named simple_integer_calculator.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
