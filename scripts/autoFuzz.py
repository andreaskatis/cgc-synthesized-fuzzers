#!/usr/bin/env python3
import os
import re
import subprocess
import socket
import sys
from subprocess import Popen, PIPE
HOST = '0.0.0.0' #The server's hostname or IP address

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
	s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
	s.connect((HOST, PORT))
	debug = open("debug_start.txt", "a")
	debug.write("Benchmark: {bench}\nPORT: {port}\nSID: {sid}\n".format(bench = benchmark, port = PORT, sid = SID))
	servConnect = "localhost:{port}/session/{sid}".format(port = PORT, sid = SID)

	#Run fuzzer
	debug = open("debug_run.txt", "a")
	while True:
		# proc = subprocess.check_output(["./fuzz.sh"])
		proc = subprocess.Popen(["./fuzz.sh"], stdout = PIPE, stderr = PIPE)
		stdout, stderr = proc.communicate()
		# debug.write("\n")
		s.sendall(stdout)

		# Collect data and print to results		
		# data = open("results.txt", "a")
		# cvg = subprocess.Popen(["curl", "-X", "GET", servConnect + "/coverage"], stdout = PIPE, stderr = PIPE)
		# stdout, stderr = cvg.communicate()
		# # coverage = subprocess.check_output(["curl", "-X", "GET", servConnect + "/coverage"])
		# print(stdout)
		# debug.write(stdout.decode('utf-8'))
		# data.write(stdout.decode('utf-8'))
		# data.write("\n")
		# debug.write("\n")	

		# events = subprocess.check_output(["curl", "-X", "GET", servConnect + "/events"])
		# debug.write({}.format(events))
		# results.write({}.format(events))
		# results.write("\n\n")
		# debug.write("\n")
		# data.close()
if (__name__ == "__main__"):
	main(sys.argv[1])
