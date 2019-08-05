#!/usr/bin/env python3
import sys
from sys import stdin
import argparse
import base64

###############################################################################
class RELAY():
    def __init__(self):
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
        #Helper function to convert a set of ints from the fuzzer to a single string of size 6
        #For some reason placing the def outside of this function doesn't work
        def ascConv(num1, num2, num3, num4, num5, num6):
            ret = ""
            ret += chr(int(num1) % 95 + 32)
            ret += chr(int(num2) % 95 + 32)
            ret += chr(int(num3) % 95 + 32)
            ret += chr(int(num4) % 95 + 32)
            ret += chr(int(num5) % 95 + 32)
            ret += chr(int(num6) % 95 + 32)
            return ret

        length = int(msg["length"])

        #Set up arrays of each exp var to simplify processing
        typeF = [int(msg["e1tyF"]), int(msg["e2tyF"]), int(msg["e3tyF"]), int(msg["e4tyF"]), int(msg["e5tyF"]), int(msg["e6tyF"]), int(msg["e7tyF"]), int(msg["e8tyF"]), int(msg["e9tyF"]), int(msg["e10tyF"]), int(msg["e11tyF"]), int(msg["e12tyF"]), int(msg["e13tyF"]), int(msg["e14tyF"]), int(msg["e15tyF"]), int(msg["e16tyF"]), int(msg["e17tyF"])]
        opF = [int(msg["e1opF"]), int(msg["e2opF"]), int(msg["e3opF"]), int(msg["e4opF"]), int(msg["e5opF"]), int(msg["e6opF"]), int(msg["e7opF"]), int(msg["e8opF"]), int(msg["e9opF"]), int(msg["e10opF"]), int(msg["e11opF"]), int(msg["e12opF"]), int(msg["e13opF"]), int(msg["e14opF"]), int(msg["e15opF"]), int(msg["e16opF"]), int(msg["e17opF"])]
        strF = [ascConv(msg["e1sF1"], msg["e1sF2"], msg["e1sF3"], msg["e1sF4"], msg["e1sF5"], msg["e1sF6"]), ascConv(msg["e2sF1"], msg["e2sF2"], msg["e2sF3"], msg["e2sF4"], msg["e2sF5"], msg["e2sF6"]), ascConv(msg["e3sF1"], msg["e3sF2"], msg["e3sF3"], msg["e3sF4"], msg["e3sF5"], msg["e3sF6"]), ascConv(msg["e4sF1"], msg["e4sF2"], msg["e4sF3"], msg["e4sF4"], msg["e4sF5"], msg["e4sF6"]), ascConv(msg["e5sF1"], msg["e5sF2"], msg["e5sF3"], msg["e5sF4"], msg["e5sF5"], msg["e5sF6"]), ascConv(msg["e6sF1"], msg["e6sF2"], msg["e6sF3"], msg["e6sF4"], msg["e6sF5"], msg["e6sF6"]), ascConv(msg["e7sF1"], msg["e7sF2"], msg["e7sF3"], msg["e7sF4"], msg["e7sF5"], msg["e7sF6"]), ascConv(msg["e8sF1"], msg["e8sF2"], msg["e8sF3"], msg["e8sF4"], msg["e8sF5"], msg["e8sF6"]), ascConv(msg["e9sF1"], msg["e9sF2"], msg["e9sF3"], msg["e9sF4"], msg["e9sF5"], msg["e9sF6"]), ascConv(msg["e10sF1"], msg["e10sF2"], msg["e10sF3"], msg["e10sF4"], msg["e10sF5"], msg["e10sF6"]), ascConv(msg["e11sF1"], msg["e11sF2"], msg["e11sF3"], msg["e11sF4"], msg["e11sF5"], msg["e11sF6"]), ascConv(msg["e12sF1"], msg["e12sF2"], msg["e12sF3"], msg["e12sF4"], msg["e12sF5"], msg["e12sF6"]), ascConv(msg["e13sF1"], msg["e13sF2"], msg["e13sF3"], msg["e13sF4"], msg["e13sF5"], msg["e13sF6"]), ascConv(msg["e14sF1"], msg["e14sF2"], msg["e14sF3"], msg["e14sF4"], msg["e14sF5"], msg["e14sF6"]), ascConv(msg["e15sF1"], msg["e15sF2"], msg["e15sF3"], msg["e15sF4"], msg["e15sF5"], msg["e15sF6"]), ascConv(msg["e16sF1"], msg["e16sF2"], msg["e16sF3"], msg["e16sF4"], msg["e16sF5"], msg["e16sF6"]), ascConv(msg["e17sF1"], msg["e17sF2"], msg["e17sF3"], msg["e17sF4"], msg["e17sF5"], msg["e17sF6"])]
        cmd = [int(msg["e1cmd"]), int(msg["e2cmd"]), int(msg["e3cmd"]), int(msg["e4cmd"]), int(msg["e5cmd"]), int(msg["e6cmd"]), int(msg["e7cmd"]), int(msg["e8cmd"]), int(msg["e9cmd"]), int(msg["e10cmd"]), int(msg["e11cmd"]), int(msg["e12cmd"]), int(msg["e13cmd"]), int(msg["e14cmd"]), int(msg["e15cmd"]), int(msg["e16cmd"]), int(msg["e17cmd"])]
        typeB = [int(msg["e1tyB"]), int(msg["e2tyB"]), int(msg["e3tyB"]), int(msg["e4tyB"]), int(msg["e5tyB"]), int(msg["e6tyB"]), int(msg["e7tyB"]), int(msg["e8tyB"]), int(msg["e9tyB"]), int(msg["e10tyB"]), int(msg["e11tyB"]), int(msg["e12tyB"]), int(msg["e13tyB"]), int(msg["e14tyB"]), int(msg["e15tyB"]), int(msg["e16tyB"]), int(msg["e17tyB"])]
        opB = [int(msg["e1opB"]), int(msg["e2opB"]), int(msg["e3opB"]), int(msg["e4opB"]), int(msg["e5opB"]), int(msg["e6opB"]), int(msg["e7opB"]), int(msg["e8opB"]), int(msg["e9opB"]), int(msg["e10opB"]), int(msg["e11opB"]), int(msg["e12opB"]), int(msg["e13opB"]), int(msg["e14opB"]), int(msg["e15opB"]), int(msg["e16opB"]), int(msg["e17opB"])]
        strB = [ascConv(msg["e1sB1"], msg["e1sB2"], msg["e1sB3"], msg["e1sB4"], msg["e1sB5"], msg["e1sB6"]), ascConv(msg["e2sB1"], msg["e2sB2"], msg["e2sB3"], msg["e2sB4"], msg["e2sB5"], msg["e2sB6"]), ascConv(msg["e3sB1"], msg["e3sB2"], msg["e3sB3"], msg["e3sB4"], msg["e3sB5"], msg["e3sB6"]), ascConv(msg["e4sB1"], msg["e4sB2"], msg["e4sB3"], msg["e4sB4"], msg["e4sB5"], msg["e4sB6"]), ascConv(msg["e5sB1"], msg["e5sB2"], msg["e5sB3"], msg["e5sB4"], msg["e5sB5"], msg["e5sB6"]), ascConv(msg["e6sB1"], msg["e6sB2"], msg["e6sB3"], msg["e6sB4"], msg["e6sB5"], msg["e6sB6"]), ascConv(msg["e7sB1"], msg["e7sB2"], msg["e7sB3"], msg["e7sB4"], msg["e7sB5"], msg["e7sB6"]), ascConv(msg["e8sB1"], msg["e8sB2"], msg["e8sB3"], msg["e8sB4"], msg["e8sB5"], msg["e8sB6"]), ascConv(msg["e9sB1"], msg["e9sB2"], msg["e9sB3"], msg["e9sB4"], msg["e9sB5"], msg["e9sB6"]), ascConv(msg["e10sB1"], msg["e10sB2"], msg["e10sB3"], msg["e10sB4"], msg["e10sB5"], msg["e10sB6"]), ascConv(msg["e11sB1"], msg["e11sB2"], msg["e11sB3"], msg["e11sB4"], msg["e11sB5"], msg["e11sB6"]), ascConv(msg["e12sB1"], msg["e12sB2"], msg["e12sB3"], msg["e12sB4"], msg["e12sB5"], msg["e12sB6"]), ascConv(msg["e13sB1"], msg["e13sB2"], msg["e13sB3"], msg["e13sB4"], msg["e13sB5"], msg["e13sB6"]), ascConv(msg["e14sB1"], msg["e14sB2"], msg["e14sB3"], msg["e14sB4"], msg["e14sB5"], msg["e14sB6"]), ascConv(msg["e15sB1"], msg["e15sB2"], msg["e15sB3"], msg["e15sB4"], msg["e15sB5"], msg["e15sB6"]), ascConv(msg["e16sB1"], msg["e16sB2"], msg["e16sB3"], msg["e16sB4"], msg["e16sB5"], msg["e16sB6"]), ascConv(msg["e17sB1"], msg["e17sB2"], msg["e17sB3"], msg["e17sB4"], msg["e17sB5"], msg["e17sB6"])]

        cmds = ["add", "sub", "mul", "div", "mod", "len", "type", "int", "equals", "+", "-", "*", "/", "%", "==", "var"]
        bls = ["True", "False"]

        exps = []
        for i in range(0, 17, 1): #Construct expressions
            curExp = ""
            if (typeF[i] % 4 == 0): #Type is int
                curExp += "{op:d} ".format(op = opF[i])
            elif (typeF[i] % 4 == 1): #Type is bool
                curExp += "{op} ".format(op = bls[opF[i] % 2])
            elif (typeF[i] % 4 == 2): #Type is str
                curExp += "\"" + strF[i][:opF[i] % 6] + "\" "
            else: #Type is var
                curExp += strF[i][:opF[i] % 6] + " "
            curExp += cmds[cmd[i] % 16] + " "
            if (typeB[i] % 4 == 0): #Type is int
                curExp += "{op:d} ".format(op = opB[i])
            elif (typeB[i] % 4 == 1): #Type is bool
                curExp += "{op} ".format(op = bls[opB[i] % 2])
            elif (typeB[i] % 4 == 2): #Type is str
                curExp += "\"" + strB[i][:opB[i] % 6] + "\" "
            else: #Type is var
                curExp += strB[i][:opB[i] % 6] + " "

            if (cmd[i] % 16 == 15): #Var cmd is issued, different structure
                curExp = "var "
                curExp += strF[i][:opF[i] % 6] + " "
                curExp += "= "
                if (typeB[i] % 3 == 0): #Type is int
                    curExp += "{op:d} ".format(op = opB[i])
                elif (typeB[i] % 3 == 1): #Type is bool
                    curExp += "{op} ".format(op = bls[opB[i] % 2])
                else: #Type is str
                    curExp += strB[i][:opB[i] % 6] + " "
                #Type 4 (var) is omitted due to not making sense in this context
            exps.append(curExp)

        msg = ""
        for i in range(0, length % 17):
            msg += exps[i]

        ##
        ## We don't really want to print/return this .. we want to "send" it somewhere ..
        ##
        sys.stdout.write(msg)
        sys.stdout.flush()
        ##self.wsock.send(bytes(msg, 'utf-8'))

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="Simple_Integer_Calculator Relay")
    relay = RELAY()
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
