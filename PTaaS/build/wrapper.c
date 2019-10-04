#include "ptaas.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
//#include <sys/random.h>

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

extern int generateRandomValue(_Bool lflag, _Bool uflag, int lbound, int ubound) {
  if (lbound == 0 && ubound == 0) {
    int s;
    syscall(SYS_getrandom, &s, sizeof(int), 1);
    return rand();
  } else {
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
}

msg_t step() {
  updateFunction();
  msg_t msg;
  msg.object      = object[0];
  msg.spec        = spec[0];
  msg.parm        = parm[0];
  msg.position.x  = position_x[0];
  msg.position.y  = position_y[0];
  msg.position.z  = position_z[0];
  msg.vector.x    = vector_x[0];
  msg.vector.y    = vector_y[0];
  msg.vector.z    = vector_z[0];
  msg.color.r     = color_r[0];
  msg.color.g     = color_g[0];
  msg.color.b     = color_b[0];
  msg.emission.r  = emission_r[0];;
  msg.emission.g  = emission_g[0];;
  msg.emission.b  = emission_b[0];;
  return msg;
}
