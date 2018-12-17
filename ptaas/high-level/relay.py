#!/usr/bin/env python3
import sys
import argparse
import socket

###############################################################################
class RELAY():

    def __init__(self,fuzzer_address,target_address):
        self.fuzzer_address = fuzzer_address
        self.target_address = target_address

    def openSockets(self):
        self.wsock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.wsock.connect(self.target_address)
        self.rsock = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)
        self.rsock.bind(self.fuzzer_address)

    def closeSockets(self):
        self.wsock.close()
        self.rsock.close()

    def run(self):
        self.openSockets()
        try:
            while True:
                msg = self.getTestVector()
                self.processTestVector(msg)
        finally:
            self.closeSockets()

    def getTestVector(self):
        payload,address = self.rsock.recvfrom(4096)
        pairlist = payload.decode('utf-8').split()
        assert(0 == (len(pairlist) % 2))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        return alist

    def processTestVector(self,msg):
        obj   = ['s','p','c','r','q'][int(msg['object']) % 5]
        spec     = ['d','s'][int(msg['spec']) % 2]
        parm     = int(msg['parm'])
        parm     = '{:f}'.format(parm/256.0) if obj == 'c' else '{:d}'.format(parm)
        position = '{x:d}, {y:d}, {z:d}'.format(x=int(msg['position.x']),y=int(msg['position.y']),z=int(msg['position.z']))
        vector = '{x:d}, {y:d}, {z:d}'.format(x=int(msg['vector.x']),y=int(msg['vector.y']),z=int(msg['vector.z']))
        color = '{r:d}, {g:d}, {b:d}'.format(r=int(msg['color.r']),g=int(msg['color.g']),b=int(msg['color.b']))
        emission = '{r:d}, {g:d}, {b:d}'.format(r=int(msg['emission.r']),g=int(msg['emission.g']),b=int(msg['emission.b']))
        msg = ""
        if obj == 'p':
            msg += '{obj}\n{spec}\n{normal}\n{loc}\n{color}\n{emiss}\n'.format(obj=obj,spec=spec,normal=vector,loc=position,color=color,emiss=emission)
        elif obj == 's':
            msg += '{obj}\n{spec}\n{radius}\n{loc}\n{color}\n{emiss}\n'.format(obj=obj,spec=spec,radius=parm,loc=position,color=color,emiss=emission)
        elif obj == 'c':
            msg += '{obj}\n{loc}\n{dir}\n{fov}\n'.format(obj=obj,loc=position,dir=vector,fov=parm)
        elif obj == 'r':
            msg += '{obj}\n'.format(obj=obj)
        else:
            msg += '{obj}\n'.format(obj=obj)
        ##
        ## We don't really want to print/return this .. we want to "send" it somewhere ..
        ##
        print('fuzzing: \n{}'.format(msg))
        ##self.wsock.send(bytes(msg, 'utf-8'))

###############################################################################
def test():
    msg = {'object':0, 
           'spec':0, 
           'parm':0, 
           'position.x':0,
           'position.y':0,
           'position.z':0,
           'vector.x':0,
           'vector.y':0,
           'vector.z':0,
           'color.r':0,
           'color.g':0,
           'color.b':0,
           'emission.r':0,
           'emission.g':0,
           'emission.b':0}
    x = RELAY(('localhost',10007),('localhost',10009))
    print(x.processTestVector(msg))
    msg['object'] = 1
    print(x.processTestVector(msg))
    msg['object'] = 2
    print(x.processTestVector(msg))
    msg['object'] = 3
    print(x.processTestVector(msg))
    msg['object'] = 4
    print(x.processTestVector(msg))
    return 0

###############################################################################
def main():
    parser = argparse.ArgumentParser(description="PTAAS Relay")
    parser.add_argument('-f', '--fuzzer',
                        required=False,
                        help="The URL of the Fuzzer [localhost]")
    parser.set_defaults(fuzzer='localhost')
    args = parser.parse_args()
    target_address = ('localhost',9967)
    fuzzer_port = 9973
    relay = RELAY((args.fuzzer,fuzzer_port),target_address)
    relay.run()

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
