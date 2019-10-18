#include "Palindrome.h"
#include <assert.h>

static int init = 0;
_Bool cvg[2];
double aeval_tmp_rand_real_1[2];
double aeval_tmp_rand_real_0[2];
double aeval_tmp_rand_real_5[2];
double aeval_tmp_rand_real_4[2];
double aeval_tmp_rand_real_3[2];
double aeval_tmp_rand_real_10[2];
double aeval_tmp_rand_real_9[2];
double location[2];
double aeval_tmp_rand_real_6[2];
double aeval_tmp_rand_real_8[2];
double aeval_tmp_rand_real_13[2];
double aeval_tmp_rand_real_14[2];
double aeval_tmp_rand_real_7[2];
_Bool guarantee_cvg_cha[2];
double option[2];
double aeval_tmp_rand_real_11[2];
double delta_cha[2];
_Bool guarantee_delta_cha[2];
double aeval_tmp_rand_real_12[2];
double aeval_tmp_rand_real_2[2];
double cha[2];

void skolem_0() {
  if (((!(cvg[0])) || (1.0 == (option[1]))) && (((!((delta_cha[1]) <= 0.1)) || (cvg[0])) && (((delta_cha[1]) <= 0.1) || (0.9 <= (delta_cha[1]))))) {
  option[0] = generateRandomValue(1, 1, 1.0, 3.0);
  guarantee_delta_cha[0] = (0.0 <= generateRandomValue(1, 1, 0.0, 1.0)) && (generateRandomValue(1, 1, 0.0, 1.0) <= 1.0);
  delta_cha[0] = generateRandomValue(1, 1, 0.0, 1.0);
  guarantee_cvg_cha[0] = ((!((!(cvg[0])) && ((delta_cha[1]) <= 0.1))) || ((126.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 32.0)) && ((!((!(cvg[0])) && ((delta_cha[1]) >= 0.9))) || ((126.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 126.0));
  cha[0] = 126.0 + generateRandomValue(0, 0, 0.0, 0.0);
  location[0] = generateRandomValue(1, 0, 0.0, 0.0);
} else {
  if (((!(cvg[0])) || (1.0 == (option[1]))) && (((!((delta_cha[1]) >= 0.9)) || (cvg[0])) && (((delta_cha[1]) <= 0.1) || (0.9 <= (delta_cha[1]))))) {
  option[0] = generateRandomValue(1, 1, 1.0, 3.0);
  guarantee_delta_cha[0] = (0.0 <= generateRandomValue(1, 1, 0.0, 1.0)) && (generateRandomValue(1, 1, 0.0, 1.0) <= 1.0);
  delta_cha[0] = generateRandomValue(1, 1, 0.0, 1.0);
  guarantee_cvg_cha[0] = ((!((!(cvg[0])) && ((delta_cha[1]) <= 0.1))) || ((32.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 32.0)) && ((!((!(cvg[0])) && ((delta_cha[1]) >= 0.9))) || ((32.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 126.0));
  cha[0] = 32.0 - generateRandomValue(0, 0, 0.0, 0.0);
  location[0] = generateRandomValue(1, 0, 0.0, 0.0);
} else {
  if (((!(cvg[0])) || (1.0 == (option[1]))) && (((!((delta_cha[1]) <= 0.1)) || (cvg[0])) && ((!((delta_cha[1]) >= 0.9)) || (cvg[0])))) {
  option[0] = generateRandomValue(1, 1, 1.0, 3.0);
  guarantee_delta_cha[0] = (0.0 <= generateRandomValue(1, 1, 0.0, 1.0)) && (generateRandomValue(1, 1, 0.0, 1.0) <= 1.0);
  delta_cha[0] = generateRandomValue(1, 1, 0.0, 1.0);
  guarantee_cvg_cha[0] = ((!((!(cvg[0])) && ((delta_cha[1]) <= 0.1))) || (generateRandomValue(1, 1, 32.0, 126.0) < 32.0)) && ((!((!(cvg[0])) && ((delta_cha[1]) >= 0.9))) || (generateRandomValue(1, 1, 32.0, 126.0) > 126.0));
  cha[0] = generateRandomValue(1, 1, 32.0, 126.0);
  location[0] = generateRandomValue(1, 0, 0.0, 0.0);
} else {
  option[0] = option[1];
  guarantee_delta_cha[0] = (0.0 <= generateRandomValue(1, 1, 0.0, 1.0)) && (generateRandomValue(1, 1, 0.0, 1.0) <= 1.0);
  delta_cha[0] = generateRandomValue(1, 1, 0.0, 1.0);
  guarantee_cvg_cha[0] = ((!((!(cvg[0])) && ((delta_cha[1]) <= 0.1))) || (generateRandomValue(1, 1, 32.0, 126.0) < 32.0)) && ((!((!(cvg[0])) && ((delta_cha[1]) >= 0.9))) || (generateRandomValue(1, 1, 32.0, 126.0) > 126.0));
  cha[0] = generateRandomValue(1, 1, 32.0, 126.0);
  location[0] = generateRandomValue(1, 0, 0.0, 0.0);
}

}

}

  return;
}


void moveHistory() {
int iterator;
for (iterator = 1; iterator > 0; iterator--) {
  cvg[iterator] = cvg[iterator - 1];
  aeval_tmp_rand_real_1[iterator] = aeval_tmp_rand_real_1[iterator - 1];
  aeval_tmp_rand_real_0[iterator] = aeval_tmp_rand_real_0[iterator - 1];
  aeval_tmp_rand_real_5[iterator] = aeval_tmp_rand_real_5[iterator - 1];
  aeval_tmp_rand_real_4[iterator] = aeval_tmp_rand_real_4[iterator - 1];
  aeval_tmp_rand_real_3[iterator] = aeval_tmp_rand_real_3[iterator - 1];
  aeval_tmp_rand_real_10[iterator] = aeval_tmp_rand_real_10[iterator - 1];
  aeval_tmp_rand_real_9[iterator] = aeval_tmp_rand_real_9[iterator - 1];
  location[iterator] = location[iterator - 1];
  aeval_tmp_rand_real_6[iterator] = aeval_tmp_rand_real_6[iterator - 1];
  aeval_tmp_rand_real_8[iterator] = aeval_tmp_rand_real_8[iterator - 1];
  aeval_tmp_rand_real_13[iterator] = aeval_tmp_rand_real_13[iterator - 1];
  aeval_tmp_rand_real_14[iterator] = aeval_tmp_rand_real_14[iterator - 1];
  aeval_tmp_rand_real_7[iterator] = aeval_tmp_rand_real_7[iterator - 1];
  guarantee_cvg_cha[iterator] = guarantee_cvg_cha[iterator - 1];
  option[iterator] = option[iterator - 1];
  aeval_tmp_rand_real_11[iterator] = aeval_tmp_rand_real_11[iterator - 1];
  delta_cha[iterator] = delta_cha[iterator - 1];
  guarantee_delta_cha[iterator] = guarantee_delta_cha[iterator - 1];
  aeval_tmp_rand_real_12[iterator] = aeval_tmp_rand_real_12[iterator - 1];
  aeval_tmp_rand_real_2[iterator] = aeval_tmp_rand_real_2[iterator - 1];
  cha[iterator] = cha[iterator - 1];
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


