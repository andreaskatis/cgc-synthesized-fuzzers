#include "semantics.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct semantics_output {
  int  median;
  int  fuzz;
} semantics_output_t;

typedef struct semantics_input {
  int  val;
} semantics_input_t;

extern int generateRandomValue(_Bool lflag, _Bool uflag, int lbound, int ubound) {
  int min = lflag ? lbound : lbound+1;
  int max = uflag ? ubound : ubound-1;
  int range = max - min;
  fprintf(stdout,"range = %d\n",range);
  double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
  fprintf(stdout,"rnd   = %g\n",rnd);
  int value = ((int) (((double) range)*rnd));
  fprintf(stdout,"value = %d\n",value);
  int res = value + min;
  fprintf(stdout,"rand  = %d\n",res);
  return res;
}

semantics_output_t compute_output(semantics_input_t in) {
  USER_val[0] = in.val;
  fprintf(stdout,"st : %04d\n",USER_st[1]);
  updateFunction();
  semantics_output_t semantics_output;
  semantics_output.median = USER_median[1];
  semantics_output.fuzz   = USER_fuzz[1];
  return semantics_output;
}
