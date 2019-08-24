#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
class RELAY():
    usernames
    passwords

    def __init__(self):
        usernames = []
        passwords = []
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
        userLen = int(msg["userLen"]) % 100 + 1
        username = msg["username"][:userLen]
        passLen = int(msg("passLen"]) % 100 + 1
        password = msg["password"][:passLen]
        index1 = int(msg["index1"]) % (len(usernames) + 1)
        flag = int(msg["flag"]) % 2
        user = int(msg["user"]) % 8 + 1
        index2 = int(msg["index2"]) % (len(usernames) + 1)
        messID = int(msg["messID"]) % 21 + 1

        msg = ""
        msg = "{main}".format(main = main)
        sys.stdout.write(msg)
        sys.stdout.flush
        if (main == 1): #New user
            msg = "{username}".format(username = username)
            usernames.append(msg)
            sys.stdout.write(msg)
            sys.stdout.flush
            msg = "{password}".format(password = password)
            passwords.append(msg)
            sys.stdout.write(msg)
            sys.stdout.flush
        elif (main == 2): #Login
            if (index1 == len(usernames)): #Pass invalid user
                msg = "{username}".format(username = username)
                sys.stdout.write(msg)
                sys.stdout.flush
            else: #Pass valid username
                msg = "{username}".format(username = usernames[index1])
                sys.stdout.write(msg)
                sys.stdout.flush
                if (flag == 1): #Pass invalid password
                    msg = "{password}".format(password = password)
                else: #Pass valid password, initiate user command
                    msg = "{password}".format(password = passwords[index1])
                    sys.stdout.write(msg)
                    sys.stdout.flush
                    msg = "{user}".format(user = user)
                    sys.stdout.write(msg)
                    sys.stdout.flush

                    if (user == 1): #Send message
                        if (index2 == len(usernames)): #Pass invalid username
                            msg = "{username}".format(username = username)
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        else: #Pass valid username
                            msg = "{username}".format(username = usernames[index2])
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        msg = "{message}".format(message = password)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{logout}".format(logout = 7)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (user == 2 or user == 6): #Pass message ID
                        msg = "{messID}".format(messID = messID)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (user == 3 or user == 4 or user == 5): #Logout
                        msg = "{logout}".format(logout = 7)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    #Command 7 is logout, so nothing needs to be done
                    elif (user == 8): #Exit
                        usernames = []
                        passwords = []
        elif (main == 3): #Exit
            usernames = []
            passwords = []

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Email_System_2 Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
