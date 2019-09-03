#include "quadtree_conways.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>

typedef struct msg {
  int command;
  int xCoord;
  int yCoord;
  int runTime;
} msg_t;

extern int generateRandomValue(_Bool lflag, _Bool uflag, int lbound, int ubound) {
  int min = lflag ? lbound : lbound+1;
  int max = uflag ? ubound : ubound-1;
  int range = max - min + 1;
  int s;
  syscall(SYS_getrandom, &s, sizeof(int), 1);
  double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
  if (rnd < 0) rnd = rnd * -1;
  int value = ((int) (((double) range)*rnd));
  return value + min;
}

msg_t step() {
  updateFunction();
  msg_t msg;
  msg.command = command[0];
  msg.xCoord  = xCoord[0];
  msg.yCoord  = yCoord[0];
  msg.runTime = runTime[0];
  return msg;
}
