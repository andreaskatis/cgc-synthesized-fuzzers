#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_genStr(Structure):
    _fields_ = [("length" , c_int),
                ("chas"   , c_int * 100)
            ]

class c_msg(Structure):
    _fields_ = [("main"     , c_int),
                ("username" , c_genStr),
                ("password" , c_genStr),
                ("index1"   , c_int),
                ("flag"     , c_int),
                ("user"     , c_int),
                ("index2"   , c_int),
                ("messId"   , c_int)
            ]

_lib_Email_System_2 = CDLL('../lib/lib_Email_System_2.so')
_lib_Email_System_2.step.restype  = c_msg

def cstep():
    global _lib_Email_System_2
    return _lib_Email_System_2.step()

###############################################################################
class SENDER():
    def __init__(self):
        pass

    def run(self):
        while True:
            msg = self.getTestVector()
            self.processTestVector(msg)
            time.sleep(0.1)

    def getTestVector(self):
        return cstep()

    def processTestVector(self,struc):
        username = ""
        for num in struc.username.chas:
            asc = chr(int(num) % 95 + 32)
            username += asc
        password = ""
        for num in struc.password.chas:
            asc = chr(int(num) % 95 + 32)
            password += asc

        msg = ""
        msg += " main {}".format(struc.main)
        msg += " userLen {}".format(struc.username.length)
        msg += " username {}".format(username)
        msg += " passLen {}".format(struc.password.length)
        msg += " password {}".format(password)
        msg += " index1 {}".format(struc.index1)
        msg += " flag {}".format(struc.flag)
        msg += " user {}".format(struc.user)
        msg += " index2 {}".format(struc.index2)
        msg += " messID {}".format(struc.messID)

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Email_System_2 Relay")
    sender = SENDER()
    sender.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
