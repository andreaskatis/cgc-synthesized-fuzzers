## Running autoFuzz.py
$python autoFuzz.py Benchmark Time

Benchmark is the name of the benchmark to run, spelled as the cgc-server expects the application to be spelled. Time is the amount of time to run the fuzzer for in minutes.

The script prints the coverage and event information into an excel file (results.csv) stored in the bin folder of the application being run. The data is stored in the following format:

	run        exec         crash      total: {Total lines}
	{currRun}  {linesExec}  {crashes}
	.
	.
	.

The script only accepts integer values for the time argument.

## Further improvements
1. Enable the script to keep track of lines executed/crash counts between calls to the fuzzer.
