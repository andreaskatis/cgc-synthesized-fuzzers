#include "basic_messaging.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <time.h>
#include <stdio.h>

typedef struct genStr {
  double chas[1];
} genStr_t;

typedef struct msg {
  double main;
  genStr_t string;
  double index1;
  double index2;
  double user;
  double messID;
} msg_t;

extern double generateRandomValue(_Bool lflag, _Bool uflag, double lbound, double ubound) {
	if (lbound == 0 && ubound == 0 && !lflag && !uflag) {
	double res = (double) rand();
	return res;
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
  msg.main            = mainC[0];
  msg.string.chas[0]  = strCha0[0];
  msg.index1          = index1[0];
  msg.index2          = index2[0];
  msg.user            = user[0];
  msg.messID          = messID[0];
  return msg;
}

// void main (_Bool cvrg) {
//   while(1) {
//     step(cvrg);
//     sleep(1);
//   }
//   return;
// }