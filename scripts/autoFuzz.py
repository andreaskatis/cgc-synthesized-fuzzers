#!/usr/bin/env python3
import os
import re
import subprocess
import socket
import sys
from subprocess import Popen, PIPE
HOST = '0.0.0.0' #The server's hostname or IP address

def parseCoverage(coverage):
	executed = 0
	total = 0
	totalEnd = 0
	while coverage.find("src", totalEnd) > 0:
		srcLine = coverage.find("src", totalEnd)
		execStart = coverage.find("\"lines_executed\":", srcLine)
		execEnd = coverage.find(",\"lines_total\"", execStart)
		totalEnd = coverage.find("},", execEnd)

		executed += int(coverage[execStart + 17:execEnd])
		total += int(coverage[execEnd + 15:totalEnd])
	return (executed, total)

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
	for i in range(0, 1000, 1):
		# proc = subprocess.check_output(["./fuzz.sh"])
		proc = subprocess.Popen(["./fuzz.sh"], stdout = PIPE, stderr = PIPE)
		stdout, stderr = proc.communicate()
		sock.sendall(stdout)

		# Collect data and print to results
		coverage = subprocess.check_output(["curl", "-X", "GET", servConnect + "/coverage"])
		(executed, total) = parseCoverage(coverage)
		data.write("exec: " + str(executed) + " total: " + str(total) + "\n")

		events = subprocess.check_output(["curl", "-X", "GET", servConnect + "/events"])
		data.write(events)
		data.write("\n")

if (__name__ == "__main__"):
	main(sys.argv[1])
