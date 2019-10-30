# synthesis

Synthesis challenge problems. The applications come from DARPA's Cyber Grand Challenge [benchmark collection](https://github.com/trailofbits/cb-multios). Each application comes with the following:

- The source code and binary(ies) for the application.
- Documentation regarding the application's input formats, and the conventions we made to write the specification of the corresponding fuzzer.
- A synthesized fuzzer for the application under (home/fuzzer). 
- Auxillary applications to send the fuzzer data (sender) and map them to actual inputs for the particular application (relay).

The fuzzers were automatically generated using a variation of the JSYN algorithm in JKind to support synthesis of nondeterministic designs. The documentation and development of the auxillary functions has been done by Jeffrey Chen.

## Running the benchmarks

In order to run a benchmark, the CGC server is needed. [You can get a copy here](https://github.com/andrewkatis/cgc-server). Follow the instructions to install the server, and run it using the command

`run.sh`

As soon as the server is running, the next step is to run a synthesized fuzzer against its corresponding application. To do this run the following command under the /scripts directory:

`python autoFuzz.sh name-of-application time-in-seconds`

A web UI is available to observe progress at http://localhost:5000 .