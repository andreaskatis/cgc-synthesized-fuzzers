#include "little.h"
#include <assert.h>

static int init = 0;
int aeval_tmp_rand_int_0[2];
_Bool historically_0_signal[2];
_Bool USER_st2_n[2];
int USER_st[2];
_Bool historically_0_holds[2];
_Bool USER_st2_2[2];
_Bool USER_otype[2];
_Bool USER_st2_1[2];
int USER_pre_st[2];
_Bool USER_stn_n[2];
int USER_i[2];
int aeval_tmp_rand_int_1[2];
_Bool USER_st2_0[2];
_Bool USER_st0_1[2];
_Bool USER_st0_2[2];
_Bool USER_st0_n[2];
_Bool USER_stn_1[2];
_Bool USER_stn_2[2];
_Bool USER_st1_1[2];
_Bool USER_st1_2[2];
_Bool USER_st1_n[2];

void skolem_0() {
  aeval_tmp_rand_int_1[0] = generateRandomValue(1, 0, 1, 2);
  assert((1 <= (aeval_tmp_rand_int_1[0])) && ((aeval_tmp_rand_int_1[0]) < 2));

  aeval_tmp_rand_int_0[0] = generateRandomValue(1, 0, 1, 2);
  assert((1 <= (aeval_tmp_rand_int_0[0])) && ((aeval_tmp_rand_int_0[0]) < 2));

  if (((init == 0) || ((!(init == 0)) && ((USER_st[1]) == 0))) && ((init == 0) || (historically_0_holds[1]))) {
  USER_st[0] = 1;
  USER_pre_st[0] = (init == 0) ? (0) : (USER_st[1]);
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (aeval_tmp_rand_int_1[0])) && ((aeval_tmp_rand_int_1[0]) <= 255)) && (((!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!((aeval_tmp_rand_int_1[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!((aeval_tmp_rand_int_1[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!((aeval_tmp_rand_int_1[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_1[0]) == 0))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_1[0]) == 2))) && ((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!(((aeval_tmp_rand_int_1[0]) > 2) || ((aeval_tmp_rand_int_1[0]) < 0)))))))))))));
  USER_otype[0] = (0 <= (aeval_tmp_rand_int_1[0])) && ((aeval_tmp_rand_int_1[0]) <= 255);
  USER_i[0] = aeval_tmp_rand_int_1[0];
  USER_st0_1[0] = 1;
  USER_st0_2[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!((aeval_tmp_rand_int_1[0]) == 2));
  USER_st0_n[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)));
  USER_stn_1[0] = 1;
  USER_stn_2[0] = (!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!((aeval_tmp_rand_int_1[0]) == 2));
  USER_stn_n[0] = (!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)));
  USER_st1_1[0] = 1;
  USER_st1_2[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!((aeval_tmp_rand_int_1[0]) == 2));
  USER_st1_n[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)));
  USER_st2_0[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_1[0]) == 0));
  USER_st2_1[0] = 1;
  USER_st2_2[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_1[0]) == 2));
  USER_st2_n[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!(((aeval_tmp_rand_int_1[0]) > 2) || ((aeval_tmp_rand_int_1[0]) < 0)));
  historically_0_signal[0] = ((0 <= (aeval_tmp_rand_int_1[0])) && ((aeval_tmp_rand_int_1[0]) <= 255)) && (((!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!((aeval_tmp_rand_int_1[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!((aeval_tmp_rand_int_1[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!((aeval_tmp_rand_int_1[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!(((aeval_tmp_rand_int_1[0]) < 1) || ((aeval_tmp_rand_int_1[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_1[0]) == 0))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_1[0]) == 2))) && ((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!(((aeval_tmp_rand_int_1[0]) > 2) || ((aeval_tmp_rand_int_1[0]) < 0))))))))))));
} else {
  USER_st[0] = 1;
  USER_pre_st[0] = (init == 0) ? (0) : (USER_st[1]);
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (aeval_tmp_rand_int_0[0])) && ((aeval_tmp_rand_int_0[0]) <= 255)) && (((!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!((aeval_tmp_rand_int_0[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!((aeval_tmp_rand_int_0[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!((aeval_tmp_rand_int_0[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_0[0]) == 0))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_0[0]) == 2))) && ((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!(((aeval_tmp_rand_int_0[0]) > 2) || ((aeval_tmp_rand_int_0[0]) < 0)))))))))))));
  USER_otype[0] = (0 <= (aeval_tmp_rand_int_0[0])) && ((aeval_tmp_rand_int_0[0]) <= 255);
  USER_i[0] = aeval_tmp_rand_int_0[0];
  USER_st0_1[0] = 1;
  USER_st0_2[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!((aeval_tmp_rand_int_0[0]) == 2));
  USER_st0_n[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)));
  USER_stn_1[0] = 1;
  USER_stn_2[0] = (!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!((aeval_tmp_rand_int_0[0]) == 2));
  USER_stn_n[0] = (!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)));
  USER_st1_1[0] = 1;
  USER_st1_2[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!((aeval_tmp_rand_int_0[0]) == 2));
  USER_st1_n[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)));
  USER_st2_0[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_0[0]) == 0));
  USER_st2_1[0] = 1;
  USER_st2_2[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_0[0]) == 2));
  USER_st2_n[0] = (!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!(((aeval_tmp_rand_int_0[0]) > 2) || ((aeval_tmp_rand_int_0[0]) < 0)));
  historically_0_signal[0] = ((0 <= (aeval_tmp_rand_int_0[0])) && ((aeval_tmp_rand_int_0[0]) <= 255)) && (((!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!((aeval_tmp_rand_int_0[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 0)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!((aeval_tmp_rand_int_0[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == -1)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!((aeval_tmp_rand_int_0[0]) == 2))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 1)) || (!(((aeval_tmp_rand_int_0[0]) < 1) || ((aeval_tmp_rand_int_0[0]) > 2)))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_0[0]) == 0))) && (((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!((aeval_tmp_rand_int_0[0]) == 2))) && ((!(((init == 0) ? (0) : (USER_st[1])) == 2)) || (!(((aeval_tmp_rand_int_0[0]) > 2) || ((aeval_tmp_rand_int_0[0]) < 0))))))))))));
}

  return;
}


void moveHistory() {
int iterator;
for (iterator = 1; iterator > 0; iterator--) {
  aeval_tmp_rand_int_0[iterator] = aeval_tmp_rand_int_0[iterator - 1];
  historically_0_signal[iterator] = historically_0_signal[iterator - 1];
  USER_st2_n[iterator] = USER_st2_n[iterator - 1];
  USER_st[iterator] = USER_st[iterator - 1];
  historically_0_holds[iterator] = historically_0_holds[iterator - 1];
  USER_st2_2[iterator] = USER_st2_2[iterator - 1];
  USER_otype[iterator] = USER_otype[iterator - 1];
  USER_st2_1[iterator] = USER_st2_1[iterator - 1];
  USER_pre_st[iterator] = USER_pre_st[iterator - 1];
  USER_stn_n[iterator] = USER_stn_n[iterator - 1];
  USER_i[iterator] = USER_i[iterator - 1];
  aeval_tmp_rand_int_1[iterator] = aeval_tmp_rand_int_1[iterator - 1];
  USER_st2_0[iterator] = USER_st2_0[iterator - 1];
  USER_st0_1[iterator] = USER_st0_1[iterator - 1];
  USER_st0_2[iterator] = USER_st0_2[iterator - 1];
  USER_st0_n[iterator] = USER_st0_n[iterator - 1];
  USER_stn_1[iterator] = USER_stn_1[iterator - 1];
  USER_stn_2[iterator] = USER_stn_2[iterator - 1];
  USER_st1_1[iterator] = USER_st1_1[iterator - 1];
  USER_st1_2[iterator] = USER_st1_2[iterator - 1];
  USER_st1_n[iterator] = USER_st1_n[iterator - 1];
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


