#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
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
        main = int(msg["main"])
        movieID = int(msg["movieID"])
        flag = int(msg["flag"])
        passLength = int(msg["passLength"])
        passStr = msg["passStr"]*int(passLength/5)
        admin = int(msg["admin"])
        titleLength = int(msg["titleLength"])
        title = msg["title"]
        descLength = int(msg["descLength"])
        desc = msg["desc"]
        year = int(msg["year"])
        score = int(msg["score"])
        genre = int(msg["genre"])
        rating = int(msg["rating"])

        msg = ""
        if (main == 1): #list
            msg = "{main}".format(main = main)
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (main == 2 or main == 3): #rent (2) or return (3) have the same msg formats
            msg = "{main}".format(main = main)
            msg+='\n'
            sys.stdout.write(msg)
            sys.stdout.flush()
            msg = "{movieID}".format(movieID = movieID)
            msg+='\n'
            sys.stdout.write(msg)
            sys.stdout.flush()
        elif (main == 4): #login
            msg = "{main}".format(main = main)
            msg+='\n'
            sys.stdout.write(msg)
            sys.stdout.flush()
            if (flag == 0): #login with "admin"
                msg = "{username}".format(username = "admin")
                msg+='\n'
                sys.stdout.write(msg)
                sys.stdout.flush
                msg = "{password}".format(password = passStr[:passLength])
                msg+='\n'
                sys.stdout.write(msg)
                sys.stdout.flush

                if (passLength > 64): #Vulnerability exploit, successful login
                    if (admin == 1 or admin == 3): #add (1) or update (3) have almost identical msg formats
                        msg = "{admin}".format(admin = admin)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        if (admin == 3): #Give movie ID
                            msg+='\n'
                            msg = "{movieID}".format(movieID = movieID)
                            sys.stdout.write(msg)
                            sys.stdout.flush
                        msg = "{title}".format(title = title[:titleLength])
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{desc}".format(desc = desc[:descLength])
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{year}".format(year = year)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{score}".format(score = score)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{genre}".format(genre = genre)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{rating}".format(rating = rating)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{logout}".format(logout = 4) #Ensure each test ends back on the main screen
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    elif (admin == 2): #remove
                        msg = "{admin}".format(admin = admin)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{movieID}".format(movieID = movieID)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                        msg = "{logout}".format(logout = 4)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
                    else: #logout (4) and exit (5) have the same msg format
                        msg = "{admin}".format(admin = admin)
                        msg+='\n'
                        sys.stdout.write(msg)
                        sys.stdout.flush
            else: #login with random username
                msg = "{username}".format(username = passStr[:passLength])
                msg+='\n'
                sys.stdout.write(msg)
                sys.stdout.flush
        else: #exit
            msg = "{main}".format(main = main)
            msg+='\n'
            sys.stdout.write(msg)
            sys.stdout.flush

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Movie_Rental_Service Relay")
        relay = RELAY()
        relay.run(line)

###############################################################################
if __name__ == "__main__":
    main()