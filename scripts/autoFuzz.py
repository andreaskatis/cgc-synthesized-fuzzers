#!/usr/bin/env python3
import os
import re
import subprocess
import socket
import sys

HOST = '0.0.0.0' #The server's hostname or IP address

def main(argv):
	benchmark = argv
	benchDir = "../" + benchmark

	"""
	#Retrieving a port assigned for the new session
	s = subprocess.check_output(["curl", "-X", "GET", "http://localhost:5000/session/start?service=" + benchmark])
	m = re.search('"port":(.+?),', str(s))
	PORT = int(m.group(1)) #The port used by the server - We could extend this to create up to 10 connections
	"""

	#Make fuzzer
	os.chdir(benchDir + "/build")
	args = ["make"]
	with open("debug_make.txt", "a") as debug:
		debug.write("Running make for {}:\n".format(benchmark))
		proc = subprocess.Popen(args, stdout = debug)
		proc.wait()
		debug.write("\n")

	#Move to bin
	os.chdir("../bin")

	sender = ["./sender.py"]
	relay = "./relay.py"
	with open("results.txt", "a") as debug:
		proc = subprocess.Popen(sender, stdout = debug, stderr = debug)
		(out, fuzzData) = proc.communicate()
		print(out, fuzzData)

	"""
	with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
		s.connect((HOST, PORT))
		while True:
		# for i in range(0,2):
			fuzzData = sender.main()
			# print("Sender data: ", fuzzData)
			relayOutput = relay.main(fuzzData)
			# print("Relay data : ", relayOutput)
			s.sendall(relayOutput.encode())
			data = s.recv(2048)
			# print('Received', repr(data)+"\n")
	"""

if (__name__ == "__main__"):
	main(sys.argv[1])
