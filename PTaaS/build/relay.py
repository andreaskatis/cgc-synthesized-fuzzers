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

    def run(self, payload):
        msg = self.getTestVector(payload)
        self.processTestVector(msg)

    def getTestVector(self, payload):
        # payload = stdin.readline()
        #payload = fuzzdata
        un64 = base64.b64decode(payload.encode()).decode()
        pairlist = un64.split()
        assert(0 == (len(pairlist) % 2))
        pairs = [pairlist[i:i+2] for i in range(0,len(pairlist),2)]
        alist = { key: value for (key,value) in pairs}
        return alist

    def processTestVector(self,msg):
        msgobj = int(msg['object'])
        msgspec = int(msg['spec'])
        obj = (['s','p','c','r','q'][msgobj % 5]) if (0 <= msgobj <= 5) else str(msgobj)
        spec = (['d','s'][msgspec % 2]) if (0 <= msgspec <= 1) else str(msgspec)
        parm     = int(msg['parm'])
        parm     = '{:f}'.format(parm/256.0) if obj == 'c' else '{:d}'.format(parm)
        position = '{x:d}, {y:d}, {z:d}'.format(x=int(msg['position.x']),y=int(msg['position.y']),z=int(msg['position.z']))
        vector   = '{x:d}, {y:d}, {z:d}'.format(x=int(msg['vector.x']),y=int(msg['vector.y']),z=int(msg['vector.z']))
        color    = '{r:d}, {g:d}, {b:d}'.format(r=int(msg['color.r']),g=int(msg['color.g']),b=int(msg['color.b']))
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
        
        sys.stdout.write(msg)
        sys.stdout.flush()
        
###############################################################################
def main():
    while True :
        line = sys.stdin.readline()
        parser = argparse.ArgumentParser(description="PTaaS Relay")
        relay = RELAY()
        relay.run(line)

###############################################################################
if __name__ == "__main__":
    sys.exit(main())
