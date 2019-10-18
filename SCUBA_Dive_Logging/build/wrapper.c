#include "SCUBA_Dive_Logging.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>
#include <time.h>
typedef struct genStr {
  double chas[5];
} genStr_t;

typedef struct diverInfo {
  genStr_t street;
  genStr_t city;
  genStr_t state;
  double data;
} diverInfo_t;

typedef struct logDive {
  double hour;
  double minute;
  double second;
  double data;
} logDive_t;

typedef struct msg {
  double main;
  genStr_t sharedStr1;
  genStr_t sharedStr2;
  double date;
  diverInfo_t change;
  logDive_t log;
  double downHex[32];
  double indx;
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
  msg.main                   = mainC[0];

  msg.sharedStr1.chas[0]     = strcha0[0];
  msg.sharedStr1.chas[1]     = strcha1[0];
  msg.sharedStr1.chas[2]     = strcha2[0];
  msg.sharedStr1.chas[3]     = strcha3[0];
  msg.sharedStr1.chas[4]     = strcha4[0];

  msg.sharedStr2.chas[0]     = strcha5[0];
  msg.sharedStr2.chas[1]     = strcha6[0];
  msg.sharedStr2.chas[2]     = strcha7[0];
  msg.sharedStr2.chas[3]     = strcha8[0];
  msg.sharedStr2.chas[4]     = strcha9[0];
  
  msg.change.street.chas[0]  = strcha10[0];
  msg.change.street.chas[1]  = strcha11[0];
  msg.change.street.chas[2]  = strcha12[0];
  msg.change.street.chas[3]  = strcha13[0];
  msg.change.street.chas[4]  = strcha14[0];

  msg.change.city.chas[0]    = strcha15[0];
  msg.change.city.chas[1]    = strcha16[0];
  msg.change.city.chas[2]    = strcha17[0];
  msg.change.city.chas[3]    = strcha18[0];
  msg.change.city.chas[4]    = strcha19[0];

  msg.change.state.chas[0]   = strcha20[0];
  msg.change.state.chas[1]   = strcha21[0];
  msg.change.state.chas[2]   = strcha22[0];
  msg.change.state.chas[3]   = strcha23[0];
  msg.change.state.chas[4]   = strcha24[0];

  msg.date                   = date[0];

  msg.change.data            = data[0];

  msg.log.hour               = hour[0];
  msg.log.minute             = minute[0];
  msg.log.second             = second[0];
  msg.log.data               = data[0];

  msg.downHex[0]             = downHex0[0];
  msg.downHex[1]             = downHex1[0];
  msg.downHex[2]             = downHex2[0];
  msg.downHex[3]             = downHex3[0];
  msg.downHex[4]             = downHex4[0];
  msg.downHex[5]             = downHex5[0];
  msg.downHex[6]             = downHex6[0];
  msg.downHex[7]             = downHex7[0];
  msg.downHex[8]             = downHex8[0];
  msg.downHex[9]             = downHex9[0];
  msg.downHex[10]            = downHex10[0];
  msg.downHex[11]            = downHex11[0];
  msg.downHex[12]            = downHex12[0];
  msg.downHex[13]            = downHex13[0];
  msg.downHex[14]            = downHex14[0];
  msg.downHex[15]            = downHex15[0];
  msg.downHex[16]            = downHex16[0];
  msg.downHex[17]            = downHex17[0];
  msg.downHex[18]            = downHex18[0];
  msg.downHex[19]            = downHex19[0];
  msg.downHex[20]            = downHex20[0];
  msg.downHex[21]            = downHex21[0];
  msg.downHex[22]            = downHex22[0];
  msg.downHex[23]            = downHex23[0];
  msg.downHex[24]            = downHex24[0];
  msg.downHex[25]            = downHex25[0];
  msg.downHex[26]            = downHex26[0];
  msg.downHex[27]            = downHex27[0];
  msg.downHex[28]            = downHex28[0];
  msg.downHex[29]            = downHex29[0];
  msg.downHex[30]            = downHex30[0];
  msg.downHex[31]            = downHex31[0];

  msg.indx                  = indx[0];
  return msg;
}

void main (_Bool cvrg) {
  while(1) {
    step(cvrg);
    sleep(1);
  }
  return;
}