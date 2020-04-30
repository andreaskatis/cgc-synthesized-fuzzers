#include "QuadtreeConways.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <time.h>
#include <stdio.h>

typedef struct msg {
  double mainC;
  double xCoord;
  double yCoord;
  double timeC;
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

  msg.mainC    = mainC[0];
  msg.xCoord   = xCoord[0];
  msg.yCoord   = yCoord[0];
  msg.timeC     = timeC[0];
  return msg;
}

// void main(_Bool cvg) {
//  while(1) {
//   step(1);
//   printf("%f\n", mainC[0]);
// }
//   return;
// }