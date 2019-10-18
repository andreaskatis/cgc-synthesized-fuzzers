#include "Material_Temperature_Simulation.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <time.h>
#include <stdio.h>

typedef struct capacity {
  double initial;
  double mod;
} capacity_t;

typedef struct temps {
  double flag;
  double val;
} temps_t;

typedef struct msg {
  double material;
  capacity_t cap;
  double xDim;
  double yDim;
  double zDim;
  temps_t isoTherm;
  temps_t constEn;
  double runTime;
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
  msg.material          = material[0];

  msg.cap.initial   = Init[0];
  msg.cap.mod      = tmod[0];

  msg.xDim              = xDim[0];
  msg.yDim              = yDim[0];
  msg.zDim              = zDim[0];

  msg.isoTherm.flag     = isoFlag[0];
  msg.isoTherm.val  = val[0];

  msg.constEn.flag      = constEnFlag[0];
  msg.constEn.val   = val[0];

  msg.runTime           = runTime[0];
  return msg;
}
void main (_Bool cvrg) {
  while(1) {
    step(cvrg);
    sleep(1);
  }
  return;
}