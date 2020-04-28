#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
usernames = []
passwords = []
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

    def processTestVector(self,msg):
        global usernames, passwords
        mainC = int(msg["mainC"])
        username = chr(int(msg["username"]))
        password = chr(int(msg["password"]))
        flag = int(msg["flag"])
        userIdx = int(msg["userIdx"]) % (len(usernames) + 1)
        cmd = int(msg["cmd"])
        indx = int(msg["indx"]) % (len(usernames) + 1)

        msg = ""
        msg = "{mainC}\n".format(mainC = mainC)
        sys.stdout.write(msg)
        sys.stdout.flush
        if (mainC == 1): #New user
            msg = "{username}".format(username = username)
            usernames.append(msg)
            msg+= '\n'
            sys.stdout.write(msg)
            sys.stdout.flush
            msg = "{password}".format(password = password)
            passwords.append(msg)
            msg+= '\n'
            sys.stdout.write(msg)
            sys.stdout.flush
        elif (mainC == 2): #Login
            if (userIdx == len(usernames)): #Pass invalid user
                msg = "{username}\n".format(username = username)
                sys.stdout.write(msg)
                sys.stdout.flush
                msg = "{password}\n".format(password = password)
                sys.stdout.write(msg)
                sys.stdout.flush
            else: #Pass valid username
                msg = "{username}\n".format(username = usernames[indx])
                sys.stdout.write(msg)
                sys.stdout.flush
                if (flag == 1): #Pass invalid password
                    msg = "{password}\n".format(password = password)
                else: #Pass valid password, initiate user command
                    msg = "{password}\n".format(password = passwords[indx])
                    sys.stdout.write(msg)
                    sys.stdout.flush
                    cmd = cmd % 6 + 1 #Trim cmd into valid user cmds
                    msg = "{user}\n".format(user = cmd)
                    sys.stdout.write(msg)
                    sys.stdout.flush

                    if (cmd == 1): #Send message
                        if (indx == len(usernames)): #Pass invalid username
                            msg = "{username}\n".format(username = username)
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        else: #Pass valid username
                            msg = "{username}\n".format(username = usernames[indx])
                            sys.stdout.write(msg)
                            sys.stdout.flush
                            msg = "{message}\n".format(message = password)
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        msg = "{logout}\n".format(logout = 5)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (user == 2 or user == 4): #Pass message ID
                        msg = "{messID}\n".format(messID = indx)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{logout}\n".format(logout = 5)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (user == 3): #Logout
                        msg = "{logout}\n".format(logout = 5)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    #Command 5 is logout, so nothing needs to be done
                    elif (user == 6): #Exit
                        usernames = []
                        passwords = []
        elif (mainC == 3): #Admin
                if (flag == 1): #Invalid admin login
                    msg = "{password}\n".format(password = password)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                else: #Valid admin login
                    msg = "$admin$77\n"
                    sys.stdout.write(msg)
                    sys.stdout.flush
                    cmd = cmd % 4 + 1 #Trim cmd to valid options
                    msg = "{admin}\n".format(admin = cmd)
                    sys.stdout.write(msg)
                    sys.stdout.flush
                    if (cmd == 1): #Logout
                        msg = "{logout}\n".format(logout = 4)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (cmd == 2): #Delete user
                        if (indx == len(usernames)): #Pass invalid user
                            msg = "{username}\n".format(username = username)
                        else: #Pass valid user
                            msg = "{username}\n".format(username = usernames[indx])
                            usernames.pop(indx)
                            passwords.pop(indx)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{logout}\n".format(logout = 4)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (cmd == 3): #Change password
                        if (indx == len(usernames)): #Pass invalid user
                            msg = "{username}\n".format(username = username)
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        else: #Pass valid user
                            msg = "{username}\n".format(username = usernames[indx])
                            sys.stdout.write(msg)
                            sys.stdout.flush
                            msg = "{password}".format(password = password)
                            passwords[indx] = msg
                            msg += "\n"
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        msg = "{logout}".format(logout = 4)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    #4 is logout, so nothing needs to be done
        elif (mainC == 4): #Exit
            usernames = []
            passwords = []

###############################################################################
def main():
    global usernames
    global passwords
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="User_Manager Relay")
        relay = RELAY()
        relay.run(line)

###############################################################################
if __name__ == "__main__":
    main()
