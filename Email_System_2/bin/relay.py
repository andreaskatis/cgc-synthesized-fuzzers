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
        main = int(msg["main"])
        usrnm = msg["username"].split(',')
        username = ""
        for char in usrnm:
            val = chr(int(char))
            username+= val

        pswrd = msg["password"].split(',')
        password =""
        for char in pswrd:
            val = chr(int(char))
            password+= val

        mssg = msg["message"].split(',')
        message = ""
        for char in mssg:
            val = chr(int(char))
            message+= val

        index1 = int(msg["index1"]) % (len(usernames) + 1)
        flag = int(msg["flag"])
        user = int(msg["user"])
        index2 = int(msg["index2"]) % (len(usernames) + 1)
        messID = int(msg["messID"])

        msg = ""
        msg = "{main}\n".format(main = main)
        sys.stdout.write(msg)
        sys.stdout.flush
        if (main == 1): #New user
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
        elif (main == 2): #Login
            if (index1 == len(usernames)): #Pass invalid user
                msg = "{username}\n".format(username = username)
                sys.stdout.write(msg)
                sys.stdout.flush
            else: #Pass valid username
                msg = "{username}\n".format(username = usernames[index1])
                sys.stdout.write(msg)
                sys.stdout.flush
                if (flag == 1): #Pass invalid password
                    msg = "{password}\n".format(password = password)
                else: #Pass valid password, initiate user command
                    msg = "{password}\n".format(password = passwords[index1])
                    sys.stdout.write(msg)
                    sys.stdout.flush
                    msg = "{user}\n".format(user = user)
                    sys.stdout.write(msg)
                    sys.stdout.flush

                    if (user == 1): #Send message
                        if (index2 == len(usernames)): #Pass invalid username
                            msg = "{username}\n".format(username = username)
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        else: #Pass valid username
                            msg = "{username}\n".format(username = usernames[index2])
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        msg = "{message}\n".format(message = password)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{logout}\n".format(logout = 7)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (user == 2 or user == 6): #Pass message ID
                        msg = "{messID}\n".format(messID = messID)
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (user == 3 or user == 4 or user == 5): #Logout
                        msg = "{logout}\n".format(logout = 7)
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
    global usernames
    global passwords
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Email_System_2 Relay")
        relay = RELAY()
        relay.run(line)

###############################################################################
if __name__ == "__main__":
    main()
