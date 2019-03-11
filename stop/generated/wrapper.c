#include "stop.h"
#include <stdlib.h>
#include <stdio.h>

typedef struct stop_output {
  int  xrw;
  int  xact;
  int  xindex;
  int  xvalue;
} stop_output_t;

typedef struct stop_feedback {
  int  rindex;
  int  rvalue;
} stop_feedback_t;

typedef struct stop_input {
  int  cmd;
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

extern int generateRandomValueExcl(int excl1, _Bool lflag, _Bool uflag, int lbound, int ubound) {
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
  if (res != excl1) {
    return generateRandomValueExcl(excl1, lflag, uflag, lbound, ubound);
  } else {
    return res;
  }
}

void apply_feedback(stop_feedback_t fb) {
  USER_rindex[0] = fb.rindex;
  USER_rvalue[0] = fb.rvalue;
}

stop_output_t compute_output(stop_input_t in) {
  USER_cmd[0] = in.cmd;
  updateFunction();
  fprintf(stdout," %d       %04d\n",USER_busy[1],USER_xreg[1]);
  stop_output_t stop_output;
  stop_output.xrw         = USER_xrw[1];
  stop_output.xact        = USER_xact[1];
  stop_output.xindex      = USER_xindex[1];
  stop_output.xvalue      = USER_xvalue[1];
  return stop_output;
}
