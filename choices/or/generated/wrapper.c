#include "or.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct stop_output {
  int  out;
} stop_output_t;

typedef struct stop_input {
  int  in;
} stop_input_t;

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

stop_output_t compute_output(stop_input_t arg) {
  in[1] = arg.in;
  updateFunction();
  stop_output_t stop_output;
  stop_output.out = out[1];
  return stop_output;
}
