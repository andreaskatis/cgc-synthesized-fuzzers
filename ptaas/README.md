# PTaaS Synthesized Fuzzer(s)

This directory contains a variety of specifications that we synthesize
to fuzz the CGC PTaaS server

## black

This directory contains a very simple, very abstract black-box model
of the server protocol.

## grey

This directory contains a slighly more interesting yet still very
abstract model of the server protocol.  The only difference from the
black box model is that here we provide controls that can be used to
modulate the fuzzing process and help ensure the generation of
(effectively) larger test sequences.

## lex

This directory contains low-level specifications of the server
protocol message format.  Using these specifications it should
be possible to generate a mixture of well-formed and mal-formed
server command messages.

## Building

Running 'make [black|grey|lex]' compiles and configures the
appropriate synthesized fuzzer.

## Relay

The **relay** script starts a server that waits for tests from the
**sender**, reformats them, and forwards them on to the fuzzing
target.  There are two different relays.  The HL (high-level)
relay can be used with either the black or grey models.  The
LL relay can be used with the low-level (lex) models.

`shell2 > ./relay.py`

or

`shell2 > ./HL_driver/relay.py`

## Sender

The **sender** script calls the synthesized fuzzer repeatedly to
generate test vectors.  Each time it generates a new test it
transmits that test to the **relay**.  Note that the **sender** and
**relay** scripts are being run from different shell prompts.

`shell1 > ./black/sender.py`
`shell1 > ./grey/sender.py`
`shell1 > ./lex/sender.py`
