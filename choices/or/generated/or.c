#include "or.h"
#include <assert.h>

static int init = 0;
int aeval_tmp_max_0[2];
int out[2];
int in[2];

void skolem_0() {
  in[0] = (-9);
  out[0] = (100 + (aeval_tmp_max_0[0])) / 2;
  aeval_tmp_max_0[0] = ((10 + (in[0])) < ((-100))) ? ((-100)) : (10 + (in[0]));
  return;
}


void moveHistory() {
int iterator;
for (iterator = 1; iterator > 0; iterator--) {
  aeval_tmp_max_0[iterator] = aeval_tmp_max_0[iterator - 1];
  out[iterator] = out[iterator - 1];
  in[iterator] = in[iterator - 1];
}
return;
}


void updateFunction() {
if (init == 0) {
  skolem_0();
  init = init + 1;
  moveHistory();
} else {
  skolem_0();
  moveHistory();
}
return;
}


