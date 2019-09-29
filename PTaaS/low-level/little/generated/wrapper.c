#include "little.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct little_output {
  int  out;
} little_output_t;

extern int generateRandomValue(_Bool lflag, _Bool uflag, int lbound, int ubound) {
  int min = lflag ? lbound : lbound+1;
  int max = uflag ? ubound : ubound-1;
  int range = max - min;
  //fprintf(stdout,"range = %d\n",range);
  double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
  //fprintf(stdout,"rnd   = %g\n",rnd);
  int value = ((int) (((double) range)*rnd));
  //fprintf(stdout,"value = %d\n",value);
  int res = value + min;
  //fprintf(stdout,"rand  = %d\n",res);
  return res;
}

little_output_t compute_output() {
  fprintf(stdout,"State  : %+04d\n",USER_st[1]);
  updateFunction();
  little_output_t little_output;
  little_output.out = USER_i[1];
  return little_output;
}
