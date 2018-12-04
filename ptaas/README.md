# PTaaS Synthesized Fuzzer

Running 'make' compiles the synthesized fuzzer.

`shell1 > make`

The **relay** script starts a server that waits for tests from the
**sender**, reformats them, and forwards them on to the fuzzing
target.

`shell2 > ./relay.py`

The **sender** script calls the synthesized fuzzer repeatedly to
generate test vectors.  Each time it generates a new test it
transmits that test to the **relay**.  Note that the **sender** and
**relay** scripts are being run from different shell prompts.

`shell1 > ./sender.py`
