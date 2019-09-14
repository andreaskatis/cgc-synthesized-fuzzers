# synthesis

Synthesis challenge problems. The applications come from DARPA's Cyber Grand Challenge [benchmark collection](https://github.com/trailofbits/cb-multios). Each application comes with the following:

- The source code and binary(ies) for the application.
- Documentation regarding the application's input formats, and the conventions we made to write the specification of the corresponding fuzzer.
- A synthesized fuzzer for the application under (home/fuzzer). 
- Auxillary applications to send the fuzzer data (sender) and map them to actual inputs for the particular application (relay).

The fuzzers were automatically generated using a variation of the JSYN algorithm in JKind to support synthesis of nondeterministic designs. The documentation and development of the auxillary functions has been done by Jeffrey Chen.