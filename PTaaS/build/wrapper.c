#include "PTaaS.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
//#include <sys/random.h>
#include <time.h>
#include <stdio.h>
typedef struct tuple {
  int x;
  int y;
  int z;  
} tuple_t;

typedef struct rgb {
  int r;
  int g;
  int b;
} rgb_t;

typedef struct msg {
  int     object;
  int     spec;
  int     parm;
  tuple_t position;
  tuple_t vector;
  rgb_t   color;
  rgb_t   emission;
} msg_t;

// extern int generateRandomValue(_Bool lflag, _Bool uflag, int lbound, int ubound) {
//   if (lbound == 0 && ubound == 0) {
//     int s;
//     // syscall(SYS_getrandom, &s, sizeof(int), 1);
//     return rand();
//   } else {
//     int min = lflag ? lbound : lbound+1;
//     int max = uflag ? ubound : ubound-1;
//     int range = max - min + 1;
//     int s;
//     // syscall(SYS_getrandom, &s, sizeof(int), 1);
//     double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
//     if (rnd < 0) rnd = rnd * -1;
//     int value = ((int) (((double) range)*rnd));
//     return value + min;
//   }
// }
extern double generateRandomValue(_Bool lflag, _Bool uflag, double lbound, double ubound) {
  if (lbound == 0 && ubound == 0) {
    return (double) rand();
  } else {
      double min = lflag ? lbound : lbound+0.001;
      double max = uflag ? ubound : ubound-0.001;
      double range = max - min;
      // int s;
      // syscall(SYS_getrandom, &s, sizeof(int), 1);
      double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
      double value = ((double) (((double) range)*rnd));
      // printf("Lflag : %d, Uflag : %d, Lbound : %f, Ubound : %f, Value : %f\n", lflag, uflag, lbound, ubound, value+min);
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
      // printf("Excl1 : %f, Lflag : %d, Uflag : %d, Lbound : %f, Ubound : %f, Value : %f\n", excl1, lflag, uflag, lbound, ubound, res);
      return res;
    }
  }
}

// extern int generateRandomValueExcl(int excl1, _Bool lflag, _Bool uflag, int lbound, int ubound) {
//   int min = (lflag && excl1 != lbound) ? lbound : lbound+1;
//   int max = (uflag && excl1 != ubound) ? ubound : ubound-1;
//   int range = max - min + 1;
//   if (range == 1) {
//     return max;
//   } else {
//     double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
//     int value = ((int) (((double) range)*rnd));
//     int res = value + min;
//     if (res == excl1) {
//       generateRandomValueExcl(excl1, 1, 1, min, max);
//     } else {
//       return res;
//     }
//   }
// }

msg_t step(_Bool cvrg) {
  srand(time(NULL));
  cvg[0] = cvrg;
  updateFunction();
  msg_t msg;
  msg.object      = USER_object[0];
  msg.spec        = USER_spex[0];
  msg.parm        = USER_parm[0];
  msg.position.x  = USER_position_USER_x[0];
  msg.position.y  = USER_position_USER_y[0];
  msg.position.z  = USER_position_USER_z[0];
  msg.vector.x    = USER_vector_USER_x[0];
  msg.vector.y    = USER_vector_USER_y[0];
  msg.vector.z    = USER_vector_USER_z[0];
  msg.color.r     = USER_color_USER_r[0];
  msg.color.g     = USER_color_USER_g[0];
  msg.color.b     = USER_color_USER_b[0];
  msg.emission.r  = USER_emission_USER_r[0];;
  msg.emission.g  = USER_emission_USER_g[0];;
  msg.emission.b  = USER_emission_USER_b[0];;
  
  // printf("%d\n", msg.object);
  return msg;
}

// void main(_Bool cvg) {
//   step(cvg);
//   return;
// }
