#include "or.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct or_output {
  int  out;
} or_output_t;

typedef struct or_input {
  int  in;
} or_input_t;

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

or_output_t compute_output(or_input_t arg) {
  in[1] = arg.in;
  updateFunction();
  or_output_t or_output;
  or_output.out = out[1];
  return or_output;
}
