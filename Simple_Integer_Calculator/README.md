## Simple_Integer_Calculator fuzzer
https://github.com/trailofbits/cb-multios/tree/master/challenges/simple_integer_calculator

## Application information
Simple_Integer_Calculator is a simple calculator, capable of performing integer addition (add, +), subtraction (sub, -), multiplication (mul, *), division (div, /), modulus (mod, %), and equality (equals, ==), along with manipulation of strings and booleans. Along with the previous functions, the Simple_Integer_Calculator is capable of the length (len), type (type), and int cast (int) operations, as well as variable definition (var) and subsequent use.

## Vulnerabilities
The Simple_Integer_Calculator has four vulnerabilities, three of which are exposed by this particular fuzzer.
1. The user is able to redefine calculator commands via the var functionality (eg "var add = 2"). If the written command is then called (ie "add"), the application treats it as a variable instead of the command. However, if the symbolic command is called (ie "+"), the application crashes.
2. Simple_Integer_Calculator splits inputs into two categories, functions (such as add or *) and operands (the ints, str, bools, and var names that the calculator operates on). If a single input contains more than 32 of either, the application crashes.
3. If the user calls the var command with no arguments, the application crashes.
4. The user is able to call the multiply function with str and int (str * int). In this case, the Simple_Integer_Calculator will simply repeat the string x many times and return the repeated string. Depending on the length of the string and size of the int, the application can crash. This is the vulnerability that the fuzzer is unable to expose, due to the fuzzer limiting the length of the input string. The reason for this limitation is explained below.

## Fuzzer information
The fuzzer sends 290 ints, which the relay then converts into a useable expression for the application. The usage and expected ranges for the generated ints are as follows:

    Variable Name       Usage                                                                       Expected Range      Instances
    length              Limits the amount of expression sent                                        [1, 17]             1
    cmd                 The operation to perform in a given expression (eg "+")                     [0, 15]             17
    type                Controls the type of the operand (str, int, bool, or var)                   [0, 3]              34
    operand             Represents an int/bool operand. Also limits the length of a str operand     Unconstrained       34
    cha                 Represents chars using ASCII conversion                                     [32, 126]           204

String operands are limited to six characters in order to increase the likelihood that vulnerability one is exercised, as it requires the fuzzer to generate a two specific (and matching) inputs. First, a var declaration using one of the predefined functions and then a use of that specific function in an expression. Because of this, however, the strings generated are not long enough to expose vulnerability four.

The relay then takes these inputs and categorizes them into 17 expressions, with each expression associating itself with one cmd, two types, two operands, and 12 chas. The expressions are then formatted based on the following logic:

    If cmd != 15: Format the expression as OPERAND CMD OPERAND
    If the type is 0: Send an int
        Use operF as is
    If the type is 1: Send a boolean
        If operand is even send True. Otherwise, send False
    If the type is 2: Send a string
            Take the six ints of the str and convert them into ASCII via the chr() command and append them into a single string.
        Use operand % 6 as the length of the string
        Send the resultant string surrounded by quotation marks
    If the type is 3: Send a variable
        Procedure is identical to if type is 2, but omit the quotation marks
    Perform this procedure for both the front and back operands
    Use the cmd integer to determine which function to use (0 is add, 1 is mul, etc)
    
    If cmd == 15: Format the expression as CMD OPERAND OPERAND
        Treat the first operand as though type is 3
        Treat the second operand as normal, but omit the variable option (type is 0-2 instead of 0-3)
    
    Convert each of the expressions using this method, labelling each sequentially (exp1, exp2, etc)
    Append (length) number of expressions into one string, separated by spaces (ie if length == 2, use 2 expressions)
    Send the string to the application as an input

## Running the fuzzer
The fuzzer files must be named simple_integer_calculator.c in order to build properly.
Run the make file found in the build folder.
Once the build process is complete, run fuzz.sh in the bin folder.
