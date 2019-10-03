#!/usr/bin/env python3
import os
import re
import subprocess
import socket
import sys
from subprocess import Popen, PIPE
HOST = '0.0.0.0' #The server's hostname or IP address

def parseCoverage(coverage, result):
	executed = 0
	total = 0
	srcLine = 0
	while True:
		if (srcLine == -1):
			break
		srcLine = coverage.find("src", srcLine)
		execStart = coverage.find("\"lines_executed\":")
		result.write(str(execStart) + "/" + coverage[execStart] + " ")

	result.write("\n")
	for i in range(0, len(coverage)):
		if (coverage[i] == "{"):
			result.write("\n")
		result.write(coverage[i])

def main(argv):
	benchmark = argv
	benchDir = "../" + benchmark

	#Retrieving a port assigned for the new session
	s = subprocess.check_output(["curl", "-X", "GET", "http://localhost:5000/session/start?service=" + benchmark])
	m = re.search('"port":(.+?),', str(s))
	PORT = int(m.group(1)) #The port used by the server - We could extend this to create up to 10 connections
	m = re.search('"id":"(.+?)"', str(s))
	SID = (m.group(1)) #The session id of the server, needed to retrieve coverage/events

	#Make fuzzer
	os.chdir(benchDir + "/build")
	args = ["make"]
	debug = open("debug_make.txt", "a")
	debug.write("Running make for {}:\n".format(benchmark))
	proc = subprocess.Popen(args, stdout = debug)
	proc.wait()
	debug.write("\n")

	os.chdir("../bin")

	#Connect to server
	sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
	sock.connect((HOST, PORT))
	debug = open("debug_run.txt", "a")
	debug.write("Benchmark: {bench}\nPORT: {port}\nSID: {sid}\n\n".format(bench = benchmark, port = PORT, sid = SID))
	servConnect = "localhost:5000/session/{sid}".format(port = PORT, sid = SID)

	#Run fuzzer
	data = open("results.txt", "a")
	while True:
		# proc = subprocess.check_output(["./fuzz.sh"])
		proc = subprocess.Popen(["./fuzz.sh"], stdout = PIPE, stderr = PIPE)
		stdout, stderr = proc.communicate()
		sock.sendall(stdout)

		# Collect data and print to results
		coverage = subprocess.check_output(["curl", "-X", "GET", servConnect + "/coverage"])
		data.write(coverage)
		data.write("\n")	

		events = subprocess.check_output(["curl", "-X", "GET", servConnect + "/events"])
		data.write(coverage)
		data.write("\n\n")
		break #Temporary measure, force while to run once to simplify debugging

	result = open("temp.txt", "w")
	parseCoverage(coverage, result)

if (__name__ == "__main__"):
	main(sys.argv[1])
