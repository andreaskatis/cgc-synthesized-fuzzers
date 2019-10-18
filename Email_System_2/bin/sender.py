#!/usr/bin/env python3
from ctypes import *
import sys
import argparse
import base64
import time

###############################################################################
class c_genStr(Structure):
    _fields_ = [("chas"   , c_double * 5)
            ]

class c_msg(Structure):
    _fields_ = [("mainC"     , c_double),
                ("username" , c_genStr),
                ("password" , c_genStr),
                ("message"  , c_genStr),
                ("index1"   , c_double),
                ("flag"     , c_double),
                ("user"     , c_double),
                ("index2"   , c_double),
                ("messID"   , c_double)
            ]

_lib_Email_System_2 = CDLL('../lib/lib_Email_System_2.so')
_lib_Email_System_2.step.restype  = c_msg

def cstep(cvg):
    global _lib_Email_System_2
    return _lib_Email_System_2.step(cvg)

###############################################################################
class SENDER():
    def __init__(self):
        pass

    def run(self, cvg):
        msg = self.getTestVector(cvg)
        self.processTestVector(msg)
        time.sleep(0.1)

    def getTestVector(self, cvg):
        return cstep(cvg)

    def processTestVector(self,struc):
        username = ",".join(str(int(round(x))) for x in struc.username.chas)
        # for num in struc.username.chas:
        #     asc = int(num)
        #     username += asc
        password = ",".join(str(int(round(x))) for x in struc.password.chas)
        # for num in struc.password.chas:
        #     asc = int(num)
        #     password += asc
        message = ",".join(str(int(round(x))) for x in struc.message.chas)

        msg = ""
        msg += " main {}".format(int(round(struc.mainC)))
        msg += " username {}".format(username)
        msg += " password {}".format(password)
        msg += " message {}".format(message)
        msg += " index1 {}".format(int(round(struc.index1)))
        msg += " flag {}".format(int(round(struc.flag)))
        msg += " user {}".format(int(round(struc.user)))
        msg += " index2 {}".format(int(round(struc.index2)))
        msg += " messID {}".format(int(round(struc.messID)))

        e64 = base64.b64encode(msg.encode()).decode()
        sys.stdout.write(e64 + '\n')
        sys.stdout.flush()

###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="Email_System_2 Relay")
        sender = SENDER()
        sender.run(line)

###############################################################################
if __name__ == "__main__":
    main()
