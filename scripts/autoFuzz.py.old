#!/usr/bin/env python3
from time import sleep
import os
import re
import subprocess
import socket
import sys
import fcntl
from datetime import datetime, timedelta
from subprocess import Popen, PIPE
HOST = '0.0.0.0' #The server's hostname or IP address

def parseCoverage(coverage, debug):
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
	#debug.write("{executed} {total} ".format(executed = executed, total = total))
	return (executed, total)

def parseEvents(events, debug):
	sigStart = events.find("SIGSEGV")
	if (sigStart < 0):
		return 0
	else:
		sigStart += 9 #Move start to start of number
		sigEnd = events.find(",", sigStart)
		if (sigEnd < 0): #If SIGSEGV is the last set of events, end with "}" instead of ","
			sigEnd = events.find("}", sigStart)

		SIGSEGV = int(events[sigStart:sigEnd])
		return SIGSEGV

def main(benchmark, runtime):
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
	debug = open(benchmark+"_debug_make.txt", "w")
	debug.write("Running make for {}:\n".format(benchmark))
	proc = subprocess.Popen(args, stdout = debug)
	proc.wait()
	debug.write("\n")

	os.chdir("../bin")

	#Connect to server
	sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
	sock.connect((HOST, PORT))
	debug = open(benchmark+"_debug_run.txt", "w")
	debug.write("Benchmark: {bench}\nPORT: {port}\nSID: {sid}\n\n".format(bench = benchmark, port = PORT, sid = SID))
	servConnect = "localhost:5000/session/{sid}".format(port = PORT, sid = SID)
	#Run fuzzer
	data = open(benchmark + ".csv", "w")
	endTime = datetime.now() + timedelta(minutes = int(runtime)) #Set endTime
	data.write("run\texec\tcrash\t\ttotal:\t")
	run = 0 #Run counter
	cvg = 0
	preexecuted = 0
	proc1 = subprocess.Popen(['python', '-u', 'sender.py'], stdin = PIPE, stdout = PIPE, stderr = PIPE, shell = False)
	proc2 = subprocess.Popen(['python', '-u', 'relay.py'], stdin = proc1.stdout, stdout = PIPE, stderr = PIPE, shell = False)
	while datetime.now() < endTime: #Run until timeout
		proc1.stdin.write(bytes(str(cvg)+'\n'))
		proc1.stdin.flush()

		stdout = proc2.stdout.readline()
		sock.sendall(stdout)
		#Collect data
		coverage = subprocess.check_output(["curl", "-X", "GET", servConnect + "/coverage"])
		(executed, total) = parseCoverage(coverage, debug)
		if preexecuted < executed :
			cvg = 1
		else :
			cvg = 0
		preexecuted = executed
		events = subprocess.check_output(["curl", "-X", "GET", servConnect + "/events"])
		SIGSEGV = parseEvents(events, debug)

		#Write data to results
		if (run == 0): #Print total lines upon discovery
			data.write("{total}\n".format(total = total))
		data.write("{run}\t{executed}\t{crash}\n".format(run = run, executed = executed, crash = SIGSEGV))
		run += 1
		sleep(0.5)
	coverage = subprocess.check_output(["curl", "-X", "GET", servConnect + "/coverage"])
	(executed, total) = parseCoverage(coverage, debug)
	events = subprocess.check_output(["curl", "-X", "GET", servConnect + "/events"])
	SIGSEGV = parseEvents(events, debug)
	data.write("{run}\t{executed}\t{crash}\n".format(run = run, executed = executed, crash = SIGSEGV))

	proc1.terminate()
	proc2.terminate()


	for i in range(0, len(coverage)):
		if (coverage[i] == "{"):
			debug.write("\n")
		debug.write(coverage[i])

if (__name__ == "__main__"):
	main(sys.argv[1], sys.argv[2])
