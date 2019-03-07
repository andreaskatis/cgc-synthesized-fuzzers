#include "semantics.h"
#include <assert.h>

static int init = 0;
int USER_val[2];
_Bool USER_out_req[2];
int USER_median[2];
int USER_fuzz[2];
_Bool historically_0_holds[2];
int USER_st[2];
_Bool USER_med_req[2];
_Bool historically_0_signal[2];
_Bool USER_stx_req[2];

void skolem_0() {
  if ((((init == 0) && (((USER_st[1]) + (USER_val[1])) == 0)) || (!(init == 0))) && ((init == 0) || (historically_0_holds[1]))) {
  historically_0_holds[0] = 1;
  USER_st[0] = (USER_st[1]) + (USER_val[1]);
  historically_0_signal[0] = 1;
  USER_stx_req[0] = ((USER_st[1]) + (USER_val[1])) == ((init == 0) ? (0) : ((USER_st[1]) + (USER_val[1])));
  USER_med_req[0] = ((USER_val[0]) + ((USER_st[1]) + (USER_val[1]))) == (((USER_st[1]) + (USER_val[1])) + (USER_val[0]));
  USER_median[0] = (USER_val[0]) + ((USER_st[1]) + (USER_val[1]));
  USER_out_req[0] = ((((USER_st[1]) + (USER_val[1])) + (USER_val[0])) <= (((-((-10)) + ((((-1)) * (USER_val[0])) + ((((-1)) * (USER_st[1])) + (((-1)) * (USER_val[1])))))) - 1)) && ((((-((-10)) + ((((-1)) * (USER_val[0])) + ((((-1)) * (USER_st[1])) + (((-1)) * (USER_val[1])))))) - 1) < ((((USER_st[1]) + (USER_val[1])) + (USER_val[0])) + 10));
  USER_fuzz[0] = ((-((-10)) + ((((-1)) * (USER_val[0])) + ((((-1)) * (USER_st[1])) + (((-1)) * (USER_val[1])))))) - 1;
} else {
  historically_0_holds[0] = 1;
  USER_st[0] = 0;
  historically_0_signal[0] = 1;
  USER_stx_req[0] = 0 == ((init == 0) ? (0) : ((USER_st[1]) + (USER_val[1])));
  USER_med_req[0] = (USER_val[0]) == (USER_val[0]);
  USER_median[0] = USER_val[0];
  USER_out_req[0] = ((USER_val[0]) <= (((-((-10)) + (((-1)) * (USER_val[0])))) - 1)) && ((((-((-10)) + (((-1)) * (USER_val[0])))) - 1) < ((USER_val[0]) + 10));
  USER_fuzz[0] = ((-((-10)) + (((-1)) * (USER_val[0])))) - 1;
}

  return;
}


void moveHistory() {
int iterator;
for (iterator = 1; iterator > 0; iterator--) {
  USER_val[iterator] = USER_val[iterator - 1];
  USER_out_req[iterator] = USER_out_req[iterator - 1];
  USER_median[iterator] = USER_median[iterator - 1];
  USER_fuzz[iterator] = USER_fuzz[iterator - 1];
  historically_0_holds[iterator] = historically_0_holds[iterator - 1];
  USER_st[iterator] = USER_st[iterator - 1];
  USER_med_req[iterator] = USER_med_req[iterator - 1];
  historically_0_signal[iterator] = historically_0_signal[iterator - 1];
  USER_stx_req[iterator] = USER_stx_req[iterator - 1];
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


