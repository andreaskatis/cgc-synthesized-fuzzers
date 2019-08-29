#include "pizza_ordering_system.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>

typedef struct msg {
  int menu;
  int genStr[9];
  int lvl1In;
  int lvl2In;
  int lvl3In;
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
  msg.menu      = menu[0];
  msg.genStr[0] = genStr0[0];
  msg.genStr[1] = genStr1[0];
  msg.genStr[2] = genStr2[0];
  msg.genStr[3] = genStr3[0];
  msg.genStr[4] = genStr4[0];
  msg.genStr[5] = genStr5[0];
  msg.genStr[6] = genStr6[0];
  msg.genStr[7] = genStr7[0];
  msg.genStr[8] = genStr8[0];
  msg.lvl1In    = lvl1In[0];
  msg.lvl2In    = lvl2In[0];
  msg.lvl3In    = lvl3In[0];
  return msg;
}
