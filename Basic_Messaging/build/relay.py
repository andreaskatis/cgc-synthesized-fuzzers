#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
class RELAY():
    usernames

    def __init__(self):
        usernames = []
        pass

    def run(self):
        while True:
            msg = self.getTestVector()
            self.processTestVector(msg)

    def getTestVector(self):
        payload = stdin.readline()
        un64 = base64.b64decode(payload.encode()).decode()
        pairlist = un64.split()
        assert(0 == (len(pairlist) % 2))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        return alist

    def processTestVector(self,msg):
        main = int(msg["main"]) % 3 + 1
        strLength = int(msg["strLength"]) % 100 + 1
        genStr = msg["genStr"][:strLength]
        index1 = int(msg["index1"]) % (len(usernames) + 1)
        index2 = int(msg["index2"]) % (len(usernames) + 1)
        user = int(msg["user"]) % 6 + 1
        messID = int(msg["id"]) % 255 + 1

        msg = ""
        msg = "{main}".format(main = main)
        sys.stdout.write(msg)
        sys.stdout.flush
        if (main == 1): #New user
            msg = "{username}".format(username = genStr)
            usernames.append(msg)
            sys.stdout.write(msg)
            sys.stdout.flush
        elif (main == 2): #Login
            if (index1 == len(usernames)): #Pass invalid user
                msg = "{username}".format(username = genStr)
                sys.stdout.write(msg)
                sys.stdout.flush
            else: #Pass valid user
                msg = "{username}".format(username = usernames[index1])
                sys.stdout.write(msg)
                sys.stdout.flush
                msg = "{user}".format(user = user)
                sys.stdout.write(msg)
                sys.stdout.flush

                if (user == 1): #Send message
                    if (index2 == len(usernames)): #Pass invalid user
                        msg = "{username}".format(username = genStr)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    else: #Pass valid user
                        msg = "{username}".format(username = usernames[index2])
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{message}".format(message = genStr)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    msg = "{logout}".format(logout = 5)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                elif (user == 2 || user == 4): #Read (2) and delete (4) have the same msg format
                    msg = "{msgID}".format(msgID = messID)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                    msg = "{logout}".format(logout = 5)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                elif (user == 3): #List messages
                    msg = "{logout}".format(logout = 5)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                elif (user == 6): #Exit
                    usernames = []
        elif (main == 3): #Exit
            usernames = []

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Basic_Messaging Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
