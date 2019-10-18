#!/usr/bin/env python3
import os
import sys
from sys import stdin
import argparse
import base64

###############################################################################
usernames = []
class RELAY():
    def __init__(self):
        pass

    def run(self, payload):
        msg = self.getTestVector(payload)
        self.processTestVector(msg)

    def getTestVector(self, payload):
        un64 = base64.b64decode(payload.encode()).decode()
        pairlist = un64.split()
        assert(0 == (len(pairlist) % 2))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        return alist

    # def processTestVector(self,msg, usernames):
    def processTestVector(self,msg):
        global usernames
        main = int(msg["main"])
        genStr = msg["genStr"]
        index1 = int(msg["index1"]) % (len(usernames) + 1)
        index2 = int(msg["index2"]) % (len(usernames) + 1)
        user = int(msg["user"])
        messID = int(msg["id"])

        msg = ""
        msg = "{main}\n".format(main = main)
        if (not (main == 1 and len(usernames) > 5)) :
            sys.stdout.write(msg)
            sys.stdout.flush
        if (main == 1): #New user
            msg = "{username}".format(username = genStr)
            if len(usernames) <= 5 :
                usernames.append(msg)
                # with open('usernames.txt', 'a') as f:
                #     f.write("%s" % msg)
                msg+='\n'
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
                    # msg = "{logout}\n".format(logout = 5)
                    # sys.stdout.write(msg)
                    # sys.stdout.flush
                elif (user == 2 or user == 4): #Read (2) and delete (4) have the same msg format
                    msg = "{msgID}\n".format(msgID = messID)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                    # msg = "{logout}\n".format(logout = 5)
                    # sys.stdout.write(msg)
                    # sys.stdout.flush
                elif (user == 3): #List messages
                    msg = "{logout}\n".format(logout = 5)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                elif (user == 6): #Exit
                    usernames = []
                    # os.remove("usernames.txt")
        elif (main == 3): #Exit
            usernames = []
            # os.remove("usernames.txt")


###############################################################################
def main():
    global usernames
    while True :
    # try:
    #     users = open("usernames.txt", "r")
    #     content = users.readlines()
    #     usernames = [x.strip() for x in content]
    # except:
    #     usernames = []
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="basic_messaging Relay")
        relay = RELAY()
        relay.run(line)
        # relay.run(usernames)
###############################################################################
if __name__ == "__main__":
    main()
