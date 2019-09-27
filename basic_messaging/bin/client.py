#!/usr/bin/env python3
import subprocess
import socket
import sender, relay
import re
HOST = '0.0.0.0'  # The server's hostname or IP address

#Retrieving a port assigned for the new session
s = subprocess.check_output(["curl", "-X", "GET", "http://localhost:5000/session/start?service=basic_messaging"])
m = re.search('"port":(.+?),', str(s))
PORT = int(m.group(1))  # The port used by the server - We could extend this to create up to 10 connections


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
