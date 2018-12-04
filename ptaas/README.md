# PTaaS Synthesized Fuzzer

Running 'make' compiles the synthesized fuzzer.

'shell1 > make'

The sender.py script calls the synthesized fuzzer to generate the next
test.  It then transmits it to the relay.  Note that in this example
the sender and relay scripts are run from different shell prompts.

'shell1 > ./sender.py'

The relay script recieves the test vector, formats it, and sends it to
the target.

'shell2 > ./relay.py'
