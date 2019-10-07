#!/usr/bin/env python3
import os
import sys
from sys import stdin
import argparse
import base64

###############################################################################

class RELAY():
    def __init__(self):
        pass

    def run(self, usernames):
        msg = self.getTestVector()
        self.processTestVector(msg, usernames)

    def getTestVector(self):
        payload = stdin.readline()
        un64 = base64.b64decode(payload.encode()).decode()
        pairlist = un64.split()
        assert(0 == (len(pairlist) % 2))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        return alist

    def processTestVector(self,msg, usernames):
        main = int(msg["main"])
        genStr = msg["genStr"]
        index1 = int(msg["index1"]) % (len(usernames) + 1)
        index2 = int(msg["index2"]) % (len(usernames) + 1)
        user = int(msg["user"])
        messID = int(msg["id"])

        msg = ""
        msg = "{main}\n".format(main = main)
        sys.stdout.write(msg)
        sys.stdout.flush
        if (main == 1): #New user
            msg = "{username}\n".format(username = genStr)
            usernames.append(msg)
            with open('usernames.txt', 'a') as f:
                f.write("%s" % msg)
            sys.stdout.write(msg)
            sys.stdout.flush
        elif (main == 2): #Login
            if (index1 == len(usernames)): #Pass invalid user
                msg = "{username}\n".format(username = genStr)
                sys.stdout.write(msg)
                sys.stdout.flush
            else: #Pass valid user
                msg = "{username}\n".format(username = usernames[index1])
                sys.stdout.write(msg)
                sys.stdout.flush
                msg = "{user}\n".format(user = user)
                sys.stdout.write(msg)
                sys.stdout.flush

                if (user == 1): #Send message
                    if (index2 == len(usernames)): #Pass invalid user
                        msg = "{username}\n".format(username = genStr)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    else: #Pass valid user
                        msg = "{username}\n".format(username = usernames[index2])
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{message}\n".format(message = genStr)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    msg = "{logout}\n".format(logout = 5)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                elif (user == 2 or user == 4): #Read (2) and delete (4) have the same msg format
                    msg = "{msgID}\n".format(msgID = messID)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                    msg = "{logout}\n".format(logout = 5)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                elif (user == 3): #List messages
                    msg = "{logout}\n".format(logout = 5)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                elif (user == 6): #Exit
                    usernames = []
        elif (main == 3): #Exit
            usernames = []

###############################################################################
def main():
    users = open("usernames.txt", "r")
    if os.path.getsize("usernames.txt") > 0 :
        content = users.readlines()
        usernames = [x.strip() for x in content]
    else :
        usernames = []
    parser = argparse.ArgumentParser(description="basic_messaging Relay")
    relay = RELAY()
    relay.run(usernames)

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
