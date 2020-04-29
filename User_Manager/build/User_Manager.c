#include "User_Manager.h"
#include <assert.h>

static int init = 0;
_Bool cvg[2];
double aeval_tmp_rand_real_8[2];
double aeval_tmp_rand_real_7[2];
double aeval_tmp_rand_real_6[2];
double aeval_tmp_rand_real_5[2];
double aeval_tmp_rand_real_4[2];
double aeval_tmp_rand_real_3[2];
double aeval_tmp_rand_real_2[2];
double aeval_tmp_rand_real_1[2];
double aeval_tmp_rand_real_17[2];
double aeval_tmp_rand_real_16[2];
double aeval_tmp_rand_real_15[2];
double aeval_tmp_rand_real_13[2];
double aeval_tmp_rand_real_12[2];
double aeval_tmp_rand_real_11[2];
double aeval_tmp_rand_real_10[2];
double aeval_tmp_rand_real_9[2];
double aeval_tmp_rand_real_26[2];
double aeval_tmp_rand_real_25[2];
double aeval_tmp_rand_real_24[2];
double aeval_tmp_rand_real_23[2];
double aeval_tmp_rand_real_21[2];
double aeval_tmp_rand_real_20[2];
double aeval_tmp_rand_real_18[2];
double aeval_tmp_rand_real_79[2];
double password[2];
double aeval_tmp_rand_real_28[2];
double aeval_tmp_rand_real_14[2];
double cmd[2];
double aeval_tmp_rand_real_76[2];
double aeval_tmp_rand_real_65[2];
_Bool guarantee_coverage_improvement_implies_delta_cmd[2];
double flag[2];
double mainC[2];
double aeval_tmp_rand_real_0[2];
_Bool guarantee_coverage_improvement_implies_delta_mainC[2];
double aeval_tmp_rand_real_47[2];
double aeval_tmp_rand_real_63[2];
_Bool guarantee_delta_cmd[2];
double username[2];
double aeval_tmp_rand_real_69[2];
double aeval_tmp_rand_real_78[2];
double aeval_tmp_rand_real_74[2];
double aeval_tmp_rand_real_80[2];
double aeval_tmp_rand_real_40[2];
double aeval_tmp_rand_real_33[2];
double delta_mainC[2];
double aeval_tmp_rand_real_67[2];
double aeval_tmp_rand_real_19[2];
double aeval_tmp_rand_real_68[2];
double aeval_tmp_rand_real_77[2];
double aeval_tmp_rand_real_51[2];
double aeval_tmp_rand_real_73[2];
double aeval_tmp_rand_real_27[2];
double aeval_tmp_rand_real_75[2];
double aeval_tmp_rand_real_32[2];
_Bool guarantee_delta_mainC[2];
double aeval_tmp_rand_real_64[2];
double delta_cmd[2];
double aeval_tmp_rand_real_50[2];
double aeval_tmp_rand_real_22[2];
double indx[2];
double aeval_tmp_rand_real_72[2];
double aeval_tmp_rand_real_66[2];
double aeval_tmp_rand_real_70[2];
double aeval_tmp_rand_real_71[2];
double aeval_tmp_rand_real_54[2];
double aeval_tmp_rand_real_55[2];
double aeval_tmp_rand_real_56[2];
double aeval_tmp_rand_real_57[2];
double aeval_tmp_rand_real_58[2];
double aeval_tmp_rand_real_59[2];
double aeval_tmp_rand_real_60[2];
double aeval_tmp_rand_real_61[2];
double aeval_tmp_rand_real_62[2];
double aeval_tmp_rand_real_45[2];
double aeval_tmp_rand_real_46[2];
double aeval_tmp_rand_real_48[2];
double aeval_tmp_rand_real_49[2];
double aeval_tmp_rand_real_52[2];
double aeval_tmp_rand_real_53[2];
double aeval_tmp_rand_real_36[2];
double aeval_tmp_rand_real_37[2];
double aeval_tmp_rand_real_38[2];
double aeval_tmp_rand_real_39[2];
double aeval_tmp_rand_real_41[2];
double aeval_tmp_rand_real_42[2];
double aeval_tmp_rand_real_43[2];
double aeval_tmp_rand_real_44[2];
double aeval_tmp_rand_real_29[2];
double aeval_tmp_rand_real_30[2];
double userIdx[2];
double aeval_tmp_rand_real_31[2];
double aeval_tmp_rand_real_34[2];
double aeval_tmp_rand_real_35[2];

void skolem_0() {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_cmd[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_cmd[1]) >= 0.1)) || (!((delta_cmd[1]) <= 0.9)))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((4.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((4.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 4.0));
  mainC[0] = 4.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || ((11.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || ((11.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 11.0));
  cmd[0] = 11.0 + generateRandomValue(0, 0, 0.0, 0.0);
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_cmd[1])) || (cvg[0])) && ((!((delta_cmd[1]) >= 0.1)) || (!((delta_cmd[1]) <= 0.9)))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 4.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 4.0) > 4.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 4.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || ((11.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || ((11.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 11.0));
  cmd[0] = 11.0 + generateRandomValue(0, 0, 0.0, 0.0);
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_cmd[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_cmd[1]) >= 0.1)) || (!((delta_cmd[1]) <= 0.9)))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 4.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || ((11.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || ((11.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 11.0));
  cmd[0] = 11.0 + generateRandomValue(0, 0, 0.0, 0.0);
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && ((((delta_cmd[1]) <= 0.9) || (cvg[0])) && ((!((delta_cmd[1]) >= 0.1)) || (!((delta_cmd[1]) <= 0.9)))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 4.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 4.0) > 4.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 4.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 11.0));
  cmd[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && ((((delta_cmd[1]) <= 0.9) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9))) && ((!((delta_cmd[1]) >= 0.1)) || (!((delta_cmd[1]) <= 0.9)))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((4.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((4.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 4.0));
  mainC[0] = 4.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 11.0));
  cmd[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((0.1 <= (delta_cmd[1])) || (cvg[0])) && ((((delta_cmd[1]) <= 0.9) || (cvg[0])) && ((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9)))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((4.0 + generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((4.0 + generateRandomValue(0, 0, 0.0, 0.0)) > 4.0));
  mainC[0] = 4.0 + generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 11.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 11.0) > 11.0));
  cmd[0] = generateRandomValue(1, 1, 0.0, 11.0);
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
} else {
  if (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_cmd[1])) || (cvg[0])) && ((((delta_cmd[1]) <= 0.9) || (cvg[0])) && ((!((delta_mainC[1]) >= 0.1)) || (!((delta_mainC[1]) <= 0.9)))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 4.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 11.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 11.0) > 11.0));
  cmd[0] = generateRandomValue(1, 1, 0.0, 11.0);
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
} else {
  if (((0.1 <= (delta_mainC[1])) || (cvg[0])) && (((!((delta_mainC[1]) >= 0.9)) || (cvg[0])) && (((0.1 <= (delta_cmd[1])) || (cvg[0])) && (((delta_cmd[1]) <= 0.9) || (cvg[0]))))) {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || (generateRandomValue(1, 1, 1.0, 4.0) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || (generateRandomValue(1, 1, 1.0, 4.0) > 4.0));
  mainC[0] = generateRandomValue(1, 1, 1.0, 4.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || (generateRandomValue(1, 1, 0.0, 11.0) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || (generateRandomValue(1, 1, 0.0, 11.0) > 11.0));
  cmd[0] = generateRandomValue(1, 1, 0.0, 11.0);
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
} else {
  delta_mainC[0] = generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0);
  delta_cmd[0] = generateRandomValue(1, 0, 0.0, 1.0 / 10.0);
  guarantee_delta_mainC[0] = (0.0 <= generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0)) && (generateRandomValue(1, 0, 1.0 / 10.0, 9.0 / 10.0) <= 1.0);
  guarantee_delta_cmd[0] = (0.0 <= generateRandomValue(1, 0, 0.0, 1.0 / 10.0)) && (generateRandomValue(1, 0, 0.0, 1.0 / 10.0) <= 1.0);
  guarantee_coverage_improvement_implies_delta_mainC[0] = ((!((!(cvg[0])) && ((delta_mainC[1]) < 0.1))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) < 1.0)) && ((!((!(cvg[0])) && ((delta_mainC[1]) >= 0.9))) || ((1.0 - generateRandomValue(0, 0, 0.0, 0.0)) > 4.0));
  mainC[0] = 1.0 - generateRandomValue(0, 0, 0.0, 0.0);
  guarantee_coverage_improvement_implies_delta_cmd[0] = ((!((!(cvg[0])) && ((delta_cmd[1]) < 0.1))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) < 0.0)) && ((!((!(cvg[0])) && ((delta_cmd[1]) > 0.9))) || (((-(generateRandomValue(0, 0, 0.0, 0.0)))) > 11.0));
  cmd[0] = (-(generateRandomValue(0, 0, 0.0, 0.0)));
  indx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  userIdx[0] = generateRandomValue(0, 0, 0.0, 0.0);
  username[0] = generateRandomValue(1, 1, 32.0, 126.0);
  password[0] = generateRandomValue(1, 1, 32.0, 126.0);
  flag[0] = generateRandomValue(1, 1, 0.0, 1.0);
}

}

}

}

}

}

}

}

  return;
}


void moveHistory() {
int iterator;
for (iterator = 1; iterator > 0; iterator--) {
  cvg[iterator] = cvg[iterator - 1];
  aeval_tmp_rand_real_8[iterator] = aeval_tmp_rand_real_8[iterator - 1];
  aeval_tmp_rand_real_7[iterator] = aeval_tmp_rand_real_7[iterator - 1];
  aeval_tmp_rand_real_6[iterator] = aeval_tmp_rand_real_6[iterator - 1];
  aeval_tmp_rand_real_5[iterator] = aeval_tmp_rand_real_5[iterator - 1];
  aeval_tmp_rand_real_4[iterator] = aeval_tmp_rand_real_4[iterator - 1];
  aeval_tmp_rand_real_3[iterator] = aeval_tmp_rand_real_3[iterator - 1];
  aeval_tmp_rand_real_2[iterator] = aeval_tmp_rand_real_2[iterator - 1];
  aeval_tmp_rand_real_1[iterator] = aeval_tmp_rand_real_1[iterator - 1];
  aeval_tmp_rand_real_17[iterator] = aeval_tmp_rand_real_17[iterator - 1];
  aeval_tmp_rand_real_16[iterator] = aeval_tmp_rand_real_16[iterator - 1];
  aeval_tmp_rand_real_15[iterator] = aeval_tmp_rand_real_15[iterator - 1];
  aeval_tmp_rand_real_13[iterator] = aeval_tmp_rand_real_13[iterator - 1];
  aeval_tmp_rand_real_12[iterator] = aeval_tmp_rand_real_12[iterator - 1];
  aeval_tmp_rand_real_11[iterator] = aeval_tmp_rand_real_11[iterator - 1];
  aeval_tmp_rand_real_10[iterator] = aeval_tmp_rand_real_10[iterator - 1];
  aeval_tmp_rand_real_9[iterator] = aeval_tmp_rand_real_9[iterator - 1];
  aeval_tmp_rand_real_26[iterator] = aeval_tmp_rand_real_26[iterator - 1];
  aeval_tmp_rand_real_25[iterator] = aeval_tmp_rand_real_25[iterator - 1];
  aeval_tmp_rand_real_24[iterator] = aeval_tmp_rand_real_24[iterator - 1];
  aeval_tmp_rand_real_23[iterator] = aeval_tmp_rand_real_23[iterator - 1];
  aeval_tmp_rand_real_21[iterator] = aeval_tmp_rand_real_21[iterator - 1];
  aeval_tmp_rand_real_20[iterator] = aeval_tmp_rand_real_20[iterator - 1];
  aeval_tmp_rand_real_18[iterator] = aeval_tmp_rand_real_18[iterator - 1];
  aeval_tmp_rand_real_79[iterator] = aeval_tmp_rand_real_79[iterator - 1];
  password[iterator] = password[iterator - 1];
  aeval_tmp_rand_real_28[iterator] = aeval_tmp_rand_real_28[iterator - 1];
  aeval_tmp_rand_real_14[iterator] = aeval_tmp_rand_real_14[iterator - 1];
  cmd[iterator] = cmd[iterator - 1];
  aeval_tmp_rand_real_76[iterator] = aeval_tmp_rand_real_76[iterator - 1];
  aeval_tmp_rand_real_65[iterator] = aeval_tmp_rand_real_65[iterator - 1];
  guarantee_coverage_improvement_implies_delta_cmd[iterator] = guarantee_coverage_improvement_implies_delta_cmd[iterator - 1];
  flag[iterator] = flag[iterator - 1];
  mainC[iterator] = mainC[iterator - 1];
  aeval_tmp_rand_real_0[iterator] = aeval_tmp_rand_real_0[iterator - 1];
  guarantee_coverage_improvement_implies_delta_mainC[iterator] = guarantee_coverage_improvement_implies_delta_mainC[iterator - 1];
  aeval_tmp_rand_real_47[iterator] = aeval_tmp_rand_real_47[iterator - 1];
  aeval_tmp_rand_real_63[iterator] = aeval_tmp_rand_real_63[iterator - 1];
  guarantee_delta_cmd[iterator] = guarantee_delta_cmd[iterator - 1];
  username[iterator] = username[iterator - 1];
  aeval_tmp_rand_real_69[iterator] = aeval_tmp_rand_real_69[iterator - 1];
  aeval_tmp_rand_real_78[iterator] = aeval_tmp_rand_real_78[iterator - 1];
  aeval_tmp_rand_real_74[iterator] = aeval_tmp_rand_real_74[iterator - 1];
  aeval_tmp_rand_real_80[iterator] = aeval_tmp_rand_real_80[iterator - 1];
  aeval_tmp_rand_real_40[iterator] = aeval_tmp_rand_real_40[iterator - 1];
  aeval_tmp_rand_real_33[iterator] = aeval_tmp_rand_real_33[iterator - 1];
  delta_mainC[iterator] = delta_mainC[iterator - 1];
  aeval_tmp_rand_real_67[iterator] = aeval_tmp_rand_real_67[iterator - 1];
  aeval_tmp_rand_real_19[iterator] = aeval_tmp_rand_real_19[iterator - 1];
  aeval_tmp_rand_real_68[iterator] = aeval_tmp_rand_real_68[iterator - 1];
  aeval_tmp_rand_real_77[iterator] = aeval_tmp_rand_real_77[iterator - 1];
  aeval_tmp_rand_real_51[iterator] = aeval_tmp_rand_real_51[iterator - 1];
  aeval_tmp_rand_real_73[iterator] = aeval_tmp_rand_real_73[iterator - 1];
  aeval_tmp_rand_real_27[iterator] = aeval_tmp_rand_real_27[iterator - 1];
  aeval_tmp_rand_real_75[iterator] = aeval_tmp_rand_real_75[iterator - 1];
  aeval_tmp_rand_real_32[iterator] = aeval_tmp_rand_real_32[iterator - 1];
  guarantee_delta_mainC[iterator] = guarantee_delta_mainC[iterator - 1];
  aeval_tmp_rand_real_64[iterator] = aeval_tmp_rand_real_64[iterator - 1];
  delta_cmd[iterator] = delta_cmd[iterator - 1];
  aeval_tmp_rand_real_50[iterator] = aeval_tmp_rand_real_50[iterator - 1];
  aeval_tmp_rand_real_22[iterator] = aeval_tmp_rand_real_22[iterator - 1];
  indx[iterator] = indx[iterator - 1];
  aeval_tmp_rand_real_72[iterator] = aeval_tmp_rand_real_72[iterator - 1];
  aeval_tmp_rand_real_66[iterator] = aeval_tmp_rand_real_66[iterator - 1];
  aeval_tmp_rand_real_70[iterator] = aeval_tmp_rand_real_70[iterator - 1];
  aeval_tmp_rand_real_71[iterator] = aeval_tmp_rand_real_71[iterator - 1];
  aeval_tmp_rand_real_54[iterator] = aeval_tmp_rand_real_54[iterator - 1];
  aeval_tmp_rand_real_55[iterator] = aeval_tmp_rand_real_55[iterator - 1];
  aeval_tmp_rand_real_56[iterator] = aeval_tmp_rand_real_56[iterator - 1];
  aeval_tmp_rand_real_57[iterator] = aeval_tmp_rand_real_57[iterator - 1];
  aeval_tmp_rand_real_58[iterator] = aeval_tmp_rand_real_58[iterator - 1];
  aeval_tmp_rand_real_59[iterator] = aeval_tmp_rand_real_59[iterator - 1];
  aeval_tmp_rand_real_60[iterator] = aeval_tmp_rand_real_60[iterator - 1];
  aeval_tmp_rand_real_61[iterator] = aeval_tmp_rand_real_61[iterator - 1];
  aeval_tmp_rand_real_62[iterator] = aeval_tmp_rand_real_62[iterator - 1];
  aeval_tmp_rand_real_45[iterator] = aeval_tmp_rand_real_45[iterator - 1];
  aeval_tmp_rand_real_46[iterator] = aeval_tmp_rand_real_46[iterator - 1];
  aeval_tmp_rand_real_48[iterator] = aeval_tmp_rand_real_48[iterator - 1];
  aeval_tmp_rand_real_49[iterator] = aeval_tmp_rand_real_49[iterator - 1];
  aeval_tmp_rand_real_52[iterator] = aeval_tmp_rand_real_52[iterator - 1];
  aeval_tmp_rand_real_53[iterator] = aeval_tmp_rand_real_53[iterator - 1];
  aeval_tmp_rand_real_36[iterator] = aeval_tmp_rand_real_36[iterator - 1];
  aeval_tmp_rand_real_37[iterator] = aeval_tmp_rand_real_37[iterator - 1];
  aeval_tmp_rand_real_38[iterator] = aeval_tmp_rand_real_38[iterator - 1];
  aeval_tmp_rand_real_39[iterator] = aeval_tmp_rand_real_39[iterator - 1];
  aeval_tmp_rand_real_41[iterator] = aeval_tmp_rand_real_41[iterator - 1];
  aeval_tmp_rand_real_42[iterator] = aeval_tmp_rand_real_42[iterator - 1];
  aeval_tmp_rand_real_43[iterator] = aeval_tmp_rand_real_43[iterator - 1];
  aeval_tmp_rand_real_44[iterator] = aeval_tmp_rand_real_44[iterator - 1];
  aeval_tmp_rand_real_29[iterator] = aeval_tmp_rand_real_29[iterator - 1];
  aeval_tmp_rand_real_30[iterator] = aeval_tmp_rand_real_30[iterator - 1];
  userIdx[iterator] = userIdx[iterator - 1];
  aeval_tmp_rand_real_31[iterator] = aeval_tmp_rand_real_31[iterator - 1];
  aeval_tmp_rand_real_34[iterator] = aeval_tmp_rand_real_34[iterator - 1];
  aeval_tmp_rand_real_35[iterator] = aeval_tmp_rand_real_35[iterator - 1];
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


