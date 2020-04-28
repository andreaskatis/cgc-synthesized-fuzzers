#include "Movie_Rental_Service.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <time.h>
#include <stdio.h>
typedef struct passStr {
  double length;
  double chas[5];
} passStr_t;

typedef struct add {
  passStr_t title;
  passStr_t desc;
  double year;
  double score;
  double genre;
  double rating;
} add_t;

typedef struct msg {
  double main;
  double movieID;
  double flag;
  passStr_t password;
  double admin;
  add_t addVal;
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
  msg.main                  = mainC[0];
  msg.movieID                 = movieID[0];
  msg.flag                  = flag[0];

  msg.password.length        = length[0];
  msg.password.chas[0]       = passCha0[0];
  msg.password.chas[1]       = passCha1[0];
  msg.password.chas[2]       = passCha2[0];
  msg.password.chas[3]       = passCha3[0];
  msg.password.chas[4]       = passCha4[0];

  msg.admin                 = admin[0];

  msg.addVal.title.length   = length[0];
  msg.addVal.title.chas[0]  = passCha0[0];
  msg.addVal.title.chas[1]  = passCha1[0];
  msg.addVal.title.chas[2]  = passCha2[0];
  msg.addVal.title.chas[3]  = passCha3[0];
  msg.addVal.title.chas[4]  = passCha4[0];

  msg.addVal.desc.length    = length[0];
  msg.addVal.desc.chas[0]   = passCha0[0];
  msg.addVal.desc.chas[1]   = passCha1[0];
  msg.addVal.desc.chas[2]   = passCha2[0];
  msg.addVal.desc.chas[3]   = passCha3[0];
  msg.addVal.desc.chas[4]   = passCha4[0];

  msg.addVal.year           = year[0];

  msg.addVal.score          = mainC[0];
  msg.addVal.genre          = admin[0];
  msg.addVal.rating         = mainC[0];
  return msg;
}

// void main(_Bool cvg) {
//  while(1) {
//   step(cvg);
// }
//   return;
// }