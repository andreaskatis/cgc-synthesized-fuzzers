#include "Email_System_2.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <time.h>
typedef struct genStr {
  double chas[5];
} genStr_t;

typedef struct msg {
  double main;
  genStr_t username;
  genStr_t password;
  genStr_t message;
  double index1;
  double flag;
  double user;
  double index2;
  double messID;
} msg_t;

extern double generateRandomValue(_Bool lflag, _Bool uflag, double lbound, double ubound) {
  if (lbound == 0 && ubound ==0) {
    return (double) rand();
  } else {
      double min = lflag ? lbound : lbound+0.001;
      double max = uflag ? ubound : ubound-0.001;
      double range = max - min;
      double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
      double value = ((double) (((double) range)*rnd));
      return value + min;
  }
}
extern double generateRandomValueExcl(double excl1, _Bool lflag, _Bool uflag, double lbound, double ubound) {
  double min = (lflag && excl1 != lbound) ? lbound : lbound+0.001;
  double max = (uflag && excl1 != ubound) ? ubound : ubound-0.001;
  double range = max - min;
  if (range == 1) {
    return max;
  } else {
    double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
    double value = ((double) (((double) range)*rnd));
    double res = value + min;
    if (res == excl1) {
      generateRandomValueExcl(excl1, lflag, uflag, min, max);
    } else {
      return res;
    }
  }
}


msg_t step(_Bool cvrg) {
  srand(time(NULL));
  cvg[0] = cvrg;
  updateFunction();
  msg_t msg;
  msg.main              = mainC[0];

  msg.username.chas[0]  = userCha0[0];
  msg.username.chas[1]  = userCha1[0];
  msg.username.chas[2]  = userCha2[0];
  msg.username.chas[3]  = userCha3[0];
  msg.username.chas[4]  = userCha4[0];

  msg.password.chas[0]  = passCha0[0];
  msg.password.chas[1]  = passCha1[0];
  msg.password.chas[2]  = passCha2[0];
  msg.password.chas[3]  = passCha3[0];
  msg.password.chas[4]  = passCha4[0];

  msg.message.chas[0]  = msgCha0[0];
  msg.message.chas[1]  = msgCha1[0];
  msg.message.chas[2]  = msgCha2[0];
  msg.message.chas[3]  = msgCha3[0];
  msg.message.chas[4]  = msgCha4[0];

  msg.index1            = index1[0];
  msg.flag              = flag[0];
  msg.user              = user[0];
  msg.index2            = index2[0];
  msg.messID            = messID[0];
  return msg;
}
