#include "stop.h"
#include <assert.h>

static int init = 0;
int USER_rindex[2];
int USER_rvalue[2];
int USER_cmd[2];
int aeval_tmp_neg_13[2];
int aeval_tmp_neg_8[2];
int aeval_tmp_neg_7[2];
int aeval_tmp_neg_5[2];
int aeval_tmp_neg_4[2];
_Bool USER_rvalue_satisfies_predicate[2];
_Bool USER_last_index_def[2];
_Bool USER_rindex_satisfies_predicate[2];
int aeval_tmp_neg_1[2];
int aeval_tmp_rand_int_14[2];
int aeval_tmp_neg_2[2];
_Bool USER_cmd_satisfies_predicate[2];
int USER_xact[2];
_Bool USER_busy[2];
int USER_xindex[2];
_Bool USER_twinkle_cmd_1[2];
_Bool USER_twinkle_cmd_2[2];
int USER_xreg[2];
int USER_last_index[2];
_Bool USER_xrw[2];
int aeval_tmp_neg_0[2];
_Bool USER_busy_def[2];
_Bool USER_xact_bound[2];
_Bool USER_read_cmd[2];
_Bool USER_write_cmd[2];
_Bool USER_xreg_def[2];
_Bool historically_0_holds[2];
_Bool USER_xvalue_bound_0[2];
int aeval_tmp_rand_int_10[2];
int USER_xvalue[2];
_Bool USER_xindex_bound[2];
_Bool USER_read_key[2];
_Bool USER_write_key[2];
int aeval_tmp_neg_3[2];
int aeval_tmp_neg_12[2];
_Bool historically_0_signal[2];
int aeval_tmp_rand_int_16[2];
int aeval_tmp_rand_int_15[2];
int aeval_tmp_neg_11[2];
int aeval_tmp_neg_6[2];
int aeval_tmp_rand_int_9[2];

void skolem_0() {
  aeval_tmp_rand_int_16[0] = generateRandomValue(1, 1, 0, 2147483647);
  assert((0 <= (aeval_tmp_rand_int_16[0])) && ((aeval_tmp_rand_int_16[0]) <= 2147483647));

  aeval_tmp_rand_int_15[0] = generateRandomValue(1, 1, 0, 2147483647);
  assert((0 <= (aeval_tmp_rand_int_15[0])) && ((aeval_tmp_rand_int_15[0]) <= 2147483647));

  aeval_tmp_rand_int_14[0] = generateRandomValue(1, 1, 0, 2147483647);
  assert((0 <= (aeval_tmp_rand_int_14[0])) && ((aeval_tmp_rand_int_14[0]) <= 2147483647));

  aeval_tmp_rand_int_10[0] = generateRandomValue(1, 1, 0, 2147483647);
  assert((0 <= (aeval_tmp_rand_int_10[0])) && ((aeval_tmp_rand_int_10[0]) <= 2147483647));

  aeval_tmp_rand_int_9[0] = generateRandomValue(1, 1, 0, 2147483647);
  assert((0 <= (aeval_tmp_rand_int_9[0])) && ((aeval_tmp_rand_int_9[0]) <= 2147483647));

  if (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((USER_xindex[1]) >= 0) && (((USER_xindex[1]) <= 8191) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && ((!(init == 0)) && ((!(USER_busy[1])) && (((USER_cmd[1]) == 5) && ((((init == 0) && ((USER_rvalue[1]) == 0)) || ((!(init == 0)) && (((USER_rindex[1]) == 0) || ((!((USER_rindex[1]) == 0)) && (((((-1)) * (USER_xreg[1])) + (USER_rvalue[1])) == 0))))) && ((init == 0) || (historically_0_holds[1])))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 0;
  USER_xvalue[0] = 0;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_rvalue[1];
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xact_bound[0] = 1;
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_xreg_def[0] = (USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_xvalue_bound_0[0] = 1;
  USER_xindex[0] = USER_xindex[1];
  USER_xindex_bound[0] = ((USER_xindex[1]) <= 8191) && (0 <= (USER_xindex[1]));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) || ((USER_xindex[1]) == (USER_xindex[1]));
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((((USER_xindex[1]) <= 8191) && (0 <= (USER_xindex[1]))) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) || ((USER_xindex[1]) == (USER_xindex[1]))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = (((USER_xindex[1]) <= 8191) && (0 <= (USER_xindex[1]))) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) || ((USER_xindex[1]) == (USER_xindex[1]))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))))));
} else {
  if (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((USER_xindex[1]) >= 0) && (((USER_xindex[1]) <= 8191) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && ((!(init == 0)) && ((!(USER_busy[1])) && (((USER_cmd[1]) == 5) && ((((init == 0) && ((USER_xreg[1]) == 0)) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))) && ((init == 0) || (historically_0_holds[1])))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 0;
  USER_xvalue[0] = 0;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_xreg[1];
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xact_bound[0] = 1;
  USER_xreg_def[0] = (USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_xvalue_bound_0[0] = 1;
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((((USER_xindex[1]) <= 8191) && (0 <= (USER_xindex[1]))) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) || ((USER_xindex[1]) == (USER_xindex[1]))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))))));
  USER_xindex[0] = USER_xindex[1];
  USER_xindex_bound[0] = ((USER_xindex[1]) <= 8191) && (0 <= (USER_xindex[1]));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) || ((USER_xindex[1]) == (USER_xindex[1]));
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = (((USER_xindex[1]) <= 8191) && (0 <= (USER_xindex[1]))) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) || ((USER_xindex[1]) == (USER_xindex[1]))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!((USER_rvalue[1]) <= 0))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!((USER_rvalue[1]) <= 0)))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0)))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (!((USER_rindex[1]) == 0))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && (((init == 0) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || ((!((USER_rindex[1]) == 0)) && ((USER_xreg[1]) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 3;
  USER_xindex[0] = 0;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xreg[0] = 0;
  USER_xrw[0] = 1;
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = 1;
  USER_xreg_def[0] = 0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_read_cmd[0] = 1;
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_read_key[0] = 1;
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (aeval_tmp_rand_int_16[0])) && ((aeval_tmp_rand_int_16[0]) <= 2147483647)) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))));
  USER_xvalue_bound_0[0] = (0 <= (aeval_tmp_rand_int_16[0])) && ((aeval_tmp_rand_int_16[0]) <= 2147483647);
  USER_xvalue[0] = aeval_tmp_rand_int_16[0];
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = ((0 <= (aeval_tmp_rand_int_16[0])) && ((aeval_tmp_rand_int_16[0]) <= 2147483647)) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (!((USER_cmd[1]) == 5)))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && ((USER_cmd[1]) == 5))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((USER_cmd[1]) == 5)))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_rvalue[1]) == 0)) || ((!(init == 0)) && (((USER_rindex[1]) == 0) || ((!((USER_rindex[1]) == 0)) && (((((-1)) * (USER_xreg[1])) + (USER_rvalue[1])) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 3;
  USER_xindex[0] = 0;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xreg[0] = USER_rvalue[1];
  USER_xrw[0] = 1;
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xact_bound[0] = 1;
  USER_xreg_def[0] = (USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_xindex_bound[0] = 1;
  USER_read_cmd[0] = 1;
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_read_key[0] = 1;
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (aeval_tmp_rand_int_15[0])) && ((aeval_tmp_rand_int_15[0]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))));
  USER_xvalue_bound_0[0] = (0 <= (aeval_tmp_rand_int_15[0])) && ((aeval_tmp_rand_int_15[0]) <= 2147483647);
  USER_xvalue[0] = aeval_tmp_rand_int_15[0];
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = ((0 <= (aeval_tmp_rand_int_15[0])) && ((aeval_tmp_rand_int_15[0]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_xreg[1]))) || ((!((USER_xreg[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_xreg[1]))) || ((!((USER_xreg[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!(0 <= ((USER_rvalue[1]) + (((-1)) * (USER_xreg[1])))))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!(0 <= ((USER_rvalue[1]) + (((-1)) * (USER_xreg[1]))))))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0)))))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_xreg[1]) == 0)) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 3;
  USER_xindex[0] = 0;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xreg[0] = USER_xreg[1];
  USER_xrw[0] = 1;
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xreg_def[0] = (USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = 1;
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (aeval_tmp_rand_int_14[0])) && ((aeval_tmp_rand_int_14[0]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))));
  USER_xvalue_bound_0[0] = (0 <= (aeval_tmp_rand_int_14[0])) && ((aeval_tmp_rand_int_14[0]) <= 2147483647);
  USER_xvalue[0] = aeval_tmp_rand_int_14[0];
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_cmd[0] = 1;
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_read_key[0] = 1;
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = ((0 <= (aeval_tmp_rand_int_14[0])) && ((aeval_tmp_rand_int_14[0]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!(0 <= (USER_rvalue[1])))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!(0 <= (USER_rvalue[1]))))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0)))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (!((USER_rindex[1]) == 0))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && (((init == 0) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || ((!((USER_rindex[1]) == 0)) && ((USER_xreg[1]) == 0))))) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1])))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 0;
  USER_xvalue[0] = 1;
  USER_xindex[0] = 0;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = 0;
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xact_bound[0] = 1;
  USER_xvalue_bound_0[0] = 1;
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_xindex_bound[0] = 1;
  USER_xreg_def[0] = 0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_twinkle_cmd_1[0] = 1;
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))));
  historically_0_signal[0] = (0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (!((USER_cmd[1]) == 5)))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && ((USER_cmd[1]) == 5))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((USER_cmd[1]) == 5)))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_rvalue[1]) == 0)) || ((!(init == 0)) && (((USER_rindex[1]) == 0) || ((!((USER_rindex[1]) == 0)) && (((((-1)) * (USER_xreg[1])) + (USER_rvalue[1])) == 0))))) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1])))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 0;
  USER_xvalue[0] = 1;
  USER_xindex[0] = 0;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_rvalue[1];
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xact_bound[0] = 1;
  USER_xvalue_bound_0[0] = 1;
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_xreg_def[0] = (USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_xindex_bound[0] = 1;
  USER_twinkle_cmd_1[0] = 1;
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = (0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!(0 <= (USER_rvalue[1])))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!(0 <= (USER_rvalue[1]))))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0)))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (!((USER_rindex[1]) == 0))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && (((init == 0) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || ((!((USER_rindex[1]) == 0)) && ((USER_xreg[1]) == 0))))) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1])))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 0;
  USER_xvalue[0] = 1;
  USER_xindex[0] = 0;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = 0;
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xact_bound[0] = 1;
  USER_xvalue_bound_0[0] = 1;
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_xindex_bound[0] = 1;
  USER_xreg_def[0] = 0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))));
  USER_twinkle_cmd_1[0] = 1;
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = ((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (!((USER_cmd[1]) == 5)))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && ((USER_cmd[1]) == 5))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((USER_cmd[1]) == 5)))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_rvalue[1]) == 0)) || ((!(init == 0)) && (((USER_rindex[1]) == 0) || ((!((USER_rindex[1]) == 0)) && (((((-1)) * (USER_xreg[1])) + (USER_rvalue[1])) == 0))))) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1])))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 0;
  USER_xvalue[0] = 1;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_rvalue[1];
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xact_bound[0] = 1;
  USER_xvalue_bound_0[0] = 1;
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_xreg_def[0] = (USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((((aeval_tmp_neg_11[0]) <= 8191) && (0 <= (aeval_tmp_neg_11[0]))) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && (((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_11[0]) <= 16) && (0 <= (aeval_tmp_neg_11[0])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))))));
  USER_xindex[0] = aeval_tmp_neg_11[0];
  USER_xindex_bound[0] = ((aeval_tmp_neg_11[0]) <= 8191) && (0 <= (aeval_tmp_neg_11[0]));
  USER_twinkle_cmd_1[0] = (!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_11[0]) <= 16) && (0 <= (aeval_tmp_neg_11[0])));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = (((aeval_tmp_neg_11[0]) <= 8191) && (0 <= (aeval_tmp_neg_11[0]))) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && (((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_11[0]) <= 16) && (0 <= (aeval_tmp_neg_11[0])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!(0 <= (USER_rvalue[1])))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!(0 <= (USER_rvalue[1]))))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0)))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (!((USER_rindex[1]) == 0))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && (((init == 0) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || ((!((USER_rindex[1]) == 0)) && ((USER_xreg[1]) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 3)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xvalue[0] = 0;
  USER_xact[0] = 2;
  USER_xindex[0] = 1;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = 0;
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = 1;
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = 1;
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_xvalue_bound_0[0] = 1;
  USER_xreg_def[0] = 0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_write_key[0] = 1;
  historically_0_signal[0] = (0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (!((USER_cmd[1]) == 5)))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && ((USER_cmd[1]) == 5))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((USER_cmd[1]) == 5)))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_rvalue[1]) == 0)) || ((!(init == 0)) && (((USER_rindex[1]) == 0) || ((!((USER_rindex[1]) == 0)) && (((((-1)) * (USER_xreg[1])) + (USER_rvalue[1])) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 3)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 2;
  USER_xindex[0] = 1;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = 1;
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = 1;
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_xreg[0] = USER_rvalue[1];
  USER_xvalue_bound_0[0] = (0 <= (USER_rvalue[1])) && ((USER_rvalue[1]) <= 2147483647);
  USER_xvalue[0] = USER_rvalue[1];
  USER_xreg_def[0] = (USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_rvalue[1]) == (USER_rvalue[1]));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (USER_rvalue[1])) && ((USER_rvalue[1]) <= 2147483647)) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_rvalue[1]) == (USER_rvalue[1])))))))))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  historically_0_signal[0] = ((0 <= (USER_rvalue[1])) && ((USER_rvalue[1]) <= 2147483647)) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_rvalue[1]) == (USER_rvalue[1]))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (!((USER_cmd[1]) == 5)))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && ((USER_cmd[1]) == 5))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((USER_cmd[1]) == 5)))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_rvalue[1]) == 0)) || ((!(init == 0)) && (((USER_rindex[1]) == 0) || ((!((USER_rindex[1]) == 0)) && (((((-1)) * (USER_xreg[1])) + (USER_rvalue[1])) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 3)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 2;
  USER_xindex[0] = 1;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = 1;
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = 1;
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (USER_rvalue[1])) && ((USER_rvalue[1]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_rvalue[1]) == (USER_rvalue[1])))))))))));
  USER_xreg[0] = USER_rvalue[1];
  USER_xvalue_bound_0[0] = (0 <= (USER_rvalue[1])) && ((USER_rvalue[1]) <= 2147483647);
  USER_xvalue[0] = USER_rvalue[1];
  USER_xreg_def[0] = (USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_write_key[0] = (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_rvalue[1]) == (USER_rvalue[1]));
  historically_0_signal[0] = ((0 <= (USER_rvalue[1])) && ((USER_rvalue[1]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_rvalue[1]) == (USER_rvalue[1]))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!(0 <= (USER_rvalue[1])))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!(0 <= (USER_rvalue[1]))))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0)))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (!((USER_rindex[1]) == 0))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && (((init == 0) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && ((USER_rvalue[1]) == 0)) || ((!((USER_rindex[1]) == 0)) && ((USER_xreg[1]) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xvalue[0] = 0;
  USER_xact[0] = 3;
  USER_xindex[0] = 0;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = 0;
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_xact_bound[0] = 1;
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_xindex_bound[0] = 1;
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))))));
  USER_xvalue_bound_0[0] = 1;
  USER_xreg_def[0] = 0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = (0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((0 == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (!((USER_cmd[1]) == 5)))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && ((USER_cmd[1]) == 5))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((USER_cmd[1]) == 5)))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_rvalue[1]) == 0)) || ((!(init == 0)) && (((USER_rindex[1]) == 0) || ((!((USER_rindex[1]) == 0)) && (((((-1)) * (USER_xreg[1])) + (USER_rvalue[1])) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 3;
  USER_xindex[0] = 0;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_rvalue[1];
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_xact_bound[0] = 1;
  USER_xreg_def[0] = (USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (aeval_tmp_rand_int_10[0])) && ((aeval_tmp_rand_int_10[0]) <= 2147483647)) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))))));
  USER_xindex_bound[0] = 1;
  USER_xvalue_bound_0[0] = (0 <= (aeval_tmp_rand_int_10[0])) && ((aeval_tmp_rand_int_10[0]) <= 2147483647);
  USER_xvalue[0] = aeval_tmp_rand_int_10[0];
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = ((0 <= (aeval_tmp_rand_int_10[0])) && ((aeval_tmp_rand_int_10[0]) <= 2147483647)) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_rvalue[1]))) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (!((USER_cmd[1]) == 5)))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && ((USER_cmd[1]) == 5))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && ((USER_cmd[1]) == 5)))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_rvalue[1]) == 0)) || ((!(init == 0)) && (((USER_rindex[1]) == 0) || ((!((USER_rindex[1]) == 0)) && (((((-1)) * (USER_xreg[1])) + (USER_rvalue[1])) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 3;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_rvalue[1];
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((((aeval_tmp_neg_6[0]) <= 8191) && (0 <= (aeval_tmp_neg_6[0]))) && (((0 <= (aeval_tmp_rand_int_9[0])) && ((aeval_tmp_rand_int_9[0]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))))))));
  USER_xindex[0] = aeval_tmp_neg_6[0];
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = ((aeval_tmp_neg_6[0]) <= 8191) && (0 <= (aeval_tmp_neg_6[0]));
  USER_xvalue_bound_0[0] = (0 <= (aeval_tmp_rand_int_9[0])) && ((aeval_tmp_rand_int_9[0]) <= 2147483647);
  USER_xvalue[0] = aeval_tmp_rand_int_9[0];
  USER_xreg_def[0] = (USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = (((aeval_tmp_neg_6[0]) <= 8191) && (0 <= (aeval_tmp_neg_6[0]))) && (((0 <= (aeval_tmp_rand_int_9[0])) && ((aeval_tmp_rand_int_9[0]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_rvalue[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_xreg[1]))) || ((!((USER_xreg[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_xreg[1]))) || ((!((USER_xreg[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!(0 <= ((USER_rvalue[1]) + (((-1)) * (USER_xreg[1])))))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!(0 <= ((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])))))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0)))))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_xreg[1]) == 0)) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[0]) == 5)) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 3)) && ((init == 0) || (historically_0_holds[1]))))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 2;
  USER_xindex[0] = 1;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_xreg[1];
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = 1;
  USER_xvalue_bound_0[0] = (0 <= (USER_xreg[1])) && ((USER_xreg[1]) <= 2147483647);
  USER_xvalue[0] = USER_xreg[1];
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xreg_def[0] = (USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = 1;
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_xreg[1]) == (USER_xreg[1]));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (USER_xreg[1])) && ((USER_xreg[1]) <= 2147483647)) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_xreg[1]) == (USER_xreg[1])))))))))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  historically_0_signal[0] = ((0 <= (USER_xreg[1])) && ((USER_xreg[1]) <= 2147483647)) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_xreg[1]) == (USER_xreg[1]))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_xreg[1]))) || ((!((USER_xreg[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_xreg[1]))) || ((!((USER_xreg[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!(0 <= ((USER_rvalue[1]) + (((-1)) * (USER_xreg[1])))))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!(0 <= ((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])))))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0)))))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && (((init == 0) || ((!(init == 0)) && ((USER_xindex[1]) == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_xreg[1]) == 0)) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1])))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 0;
  USER_xvalue[0] = 1;
  USER_last_index[0] = 0;
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_xreg[1];
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xact_bound[0] = 1;
  USER_xvalue_bound_0[0] = 1;
  USER_xreg_def[0] = (USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((((aeval_tmp_neg_3[0]) <= 8191) && (0 <= (aeval_tmp_neg_3[0]))) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && (((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_3[0]) <= 16) && (0 <= (aeval_tmp_neg_3[0])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))))));
  USER_xindex[0] = aeval_tmp_neg_3[0];
  USER_xindex_bound[0] = ((aeval_tmp_neg_3[0]) <= 8191) && (0 <= (aeval_tmp_neg_3[0]));
  USER_last_index_def[0] = 0 == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_twinkle_cmd_1[0] = (!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_3[0]) <= 16) && (0 <= (aeval_tmp_neg_3[0])));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = (((aeval_tmp_neg_3[0]) <= 8191) && (0 <= (aeval_tmp_neg_3[0]))) && ((0 == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && (((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_3[0]) <= 16) && (0 <= (aeval_tmp_neg_3[0])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))))));
} else {
  if ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((((!((USER_cmd[1]) == 5)) && (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && ((!(0 <= (USER_xreg[1]))) || ((!((USER_xreg[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))))) || ((((USER_cmd[1]) == 5) && ((!((USER_cmd[1]) == 5)) || (((!((USER_rvalue[1]) >= 0)) || ((!((USER_rvalue[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || (!((USER_rindex[1]) == 0))))) && (((!(0 <= (USER_xreg[1]))) || ((!((USER_xreg[1]) <= 2147483647)) || (((USER_cmd[1]) == 5) || ((USER_rindex[1]) == 0)))) && (((!((USER_cmd[1]) == 5)) || (((!((USER_rindex[1]) == 0)) || (!(0 <= ((USER_rvalue[1]) + (((-1)) * (USER_xreg[1])))))) && ((USER_rindex[1]) == 0))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) && (((USER_rindex[1]) == 0) || (!(0 <= ((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])))))))))))) || (((!((USER_cmd[1]) == 5)) || (((USER_rindex[1]) == 0) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && ((!((USER_cmd[1]) == 5)) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_rindex[1]) == 0)) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0)))))))))))) && ((!((USER_cmd[1]) == 5)) || ((!((USER_rindex[1]) == 0)) || (((USER_cmd[1]) == 5) && ((((USER_cmd[1]) == 5) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))))) && (((!((USER_cmd[1]) == 5)) || (((USER_cmd[1]) == 5) && ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && ((USER_rindex[1]) == 0)))) || ((((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && ((!((USER_cmd[1]) == 5)) && (!((USER_rindex[1]) == 0))))) || ((USER_cmd[1]) == 5))))) && ((!((USER_cmd[1]) == 5)) || ((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && (((USER_rindex[1]) == 0) && ((USER_cmd[1]) == 5)))) || (((((USER_rvalue[1]) >= 0) && (((USER_rvalue[1]) <= 2147483647) && ((USER_rindex[1]) == 0))) || (((USER_xreg[1]) >= 0) && (((USER_xreg[1]) <= 2147483647) && (!((USER_rindex[1]) == 0))))) && (((USER_cmd[1]) == 5) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))))))))))))) && ((0 <= (USER_cmd[0])) && (((USER_cmd[0]) <= 5) && ((0 <= (USER_rindex[0])) && (((USER_rindex[0]) <= 8191) && ((0 <= (USER_rvalue[0])) && (((USER_rvalue[0]) <= 2147483647) && ((((init == 0) && ((USER_xindex[1]) == 0)) || (!(init == 0))) && (((init == 0) || ((USER_busy[1]) || (!((USER_cmd[1]) == 5)))) && ((((init == 0) && ((USER_xreg[1]) == 0)) || ((!(init == 0)) && ((((USER_rindex[1]) == 0) && (((((-1)) * (USER_rvalue[1])) + (USER_xreg[1])) == 0)) || (!((USER_rindex[1]) == 0))))) && ((!((USER_cmd[0]) == 1)) && ((!((USER_cmd[0]) == 2)) && ((!((USER_cmd[0]) == 3)) && ((!((USER_cmd[0]) == 4)) && ((init == 0) || (historically_0_holds[1])))))))))))))))))) {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 0;
  USER_xvalue[0] = 1;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  USER_xreg[0] = USER_xreg[1];
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && ((((aeval_tmp_neg_0[0]) <= 8191) && (0 <= (aeval_tmp_neg_0[0]))) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && (((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_0[0]) <= 16) && (0 <= (aeval_tmp_neg_0[0])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))))))))))));
  USER_xindex[0] = aeval_tmp_neg_0[0];
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = ((aeval_tmp_neg_0[0]) <= 8191) && (0 <= (aeval_tmp_neg_0[0]));
  USER_xvalue_bound_0[0] = 1;
  USER_xreg_def[0] = (USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_twinkle_cmd_1[0] = (!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_0[0]) <= 16) && (0 <= (aeval_tmp_neg_0[0])));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = !(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = !(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  historically_0_signal[0] = (((aeval_tmp_neg_0[0]) <= 8191) && (0 <= (aeval_tmp_neg_0[0]))) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && (((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || (((aeval_tmp_neg_0[0]) <= 16) && (0 <= (aeval_tmp_neg_0[0])))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 2) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))))))))))))));
} else {
  USER_busy[0] = (init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5));
  USER_xact[0] = 2;
  USER_xindex[0] = 1;
  USER_last_index[0] = USER_xindex[1];
  USER_cmd_satisfies_predicate[0] = 1;
  USER_rindex_satisfies_predicate[0] = 1;
  USER_rvalue_satisfies_predicate[0] = 1;
  USER_xrw[0] = 0;
  historically_0_holds[0] = ((init == 0) ? (1) : (historically_0_holds[1])) && (((0 <= (USER_xreg[1])) && ((USER_xreg[1]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_xreg[1]) == (USER_xreg[1])))))))))));
  USER_xreg[0] = USER_xreg[1];
  USER_xact_bound[0] = 1;
  USER_xindex_bound[0] = 1;
  USER_xvalue_bound_0[0] = (0 <= (USER_xreg[1])) && ((USER_xreg[1]) <= 2147483647);
  USER_xvalue[0] = USER_xreg[1];
  USER_last_index_def[0] = (USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]));
  USER_busy_def[0] = ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_xreg_def[0] = (USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])));
  USER_twinkle_cmd_1[0] = !(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_twinkle_cmd_2[0] = !((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)));
  USER_read_cmd[0] = !(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_cmd[0] = 1;
  USER_read_key[0] = !(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))));
  USER_write_key[0] = (!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_xreg[1]) == (USER_xreg[1]));
  historically_0_signal[0] = ((0 <= (USER_xreg[1])) && ((USER_xreg[1]) <= 2147483647)) && (((USER_xindex[1]) == ((init == 0) ? (0) : (USER_xindex[1]))) && ((((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5))) == ((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && (((USER_xreg[1]) == ((init == 0) ? (0) : (((USER_rindex[1]) == 0) ? (USER_rvalue[1]) : (USER_xreg[1])))) && ((!(((USER_cmd[0]) == 5) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))) && ((!(((USER_cmd[0]) == 1) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 3) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) && ((!(((USER_cmd[0]) == 4) && (!((init == 0) ? (0) : ((!(USER_busy[1])) && ((USER_cmd[1]) == 5)))))) || ((USER_xreg[1]) == (USER_xreg[1]))))))))));
}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

}

  aeval_tmp_neg_0[0] = aeval_tmp_neg_1[0];
  aeval_tmp_neg_1[0] = 2;
  aeval_tmp_neg_3[0] = aeval_tmp_neg_4[0];
  aeval_tmp_neg_4[0] = 2;
  aeval_tmp_neg_6[0] = aeval_tmp_neg_7[0];
  aeval_tmp_neg_7[0] = 2;
  aeval_tmp_neg_11[0] = aeval_tmp_neg_12[0];
  aeval_tmp_neg_12[0] = 2;
  return;
}


void moveHistory() {
int iterator;
for (iterator = 1; iterator > 0; iterator--) {
  USER_rindex[iterator] = USER_rindex[iterator - 1];
  USER_rvalue[iterator] = USER_rvalue[iterator - 1];
  USER_cmd[iterator] = USER_cmd[iterator - 1];
  aeval_tmp_neg_13[iterator] = aeval_tmp_neg_13[iterator - 1];
  aeval_tmp_neg_8[iterator] = aeval_tmp_neg_8[iterator - 1];
  aeval_tmp_neg_7[iterator] = aeval_tmp_neg_7[iterator - 1];
  aeval_tmp_neg_5[iterator] = aeval_tmp_neg_5[iterator - 1];
  aeval_tmp_neg_4[iterator] = aeval_tmp_neg_4[iterator - 1];
  USER_rvalue_satisfies_predicate[iterator] = USER_rvalue_satisfies_predicate[iterator - 1];
  USER_last_index_def[iterator] = USER_last_index_def[iterator - 1];
  USER_rindex_satisfies_predicate[iterator] = USER_rindex_satisfies_predicate[iterator - 1];
  aeval_tmp_neg_1[iterator] = aeval_tmp_neg_1[iterator - 1];
  aeval_tmp_rand_int_14[iterator] = aeval_tmp_rand_int_14[iterator - 1];
  aeval_tmp_neg_2[iterator] = aeval_tmp_neg_2[iterator - 1];
  USER_cmd_satisfies_predicate[iterator] = USER_cmd_satisfies_predicate[iterator - 1];
  USER_xact[iterator] = USER_xact[iterator - 1];
  USER_busy[iterator] = USER_busy[iterator - 1];
  USER_xindex[iterator] = USER_xindex[iterator - 1];
  USER_twinkle_cmd_1[iterator] = USER_twinkle_cmd_1[iterator - 1];
  USER_twinkle_cmd_2[iterator] = USER_twinkle_cmd_2[iterator - 1];
  USER_xreg[iterator] = USER_xreg[iterator - 1];
  USER_last_index[iterator] = USER_last_index[iterator - 1];
  USER_xrw[iterator] = USER_xrw[iterator - 1];
  aeval_tmp_neg_0[iterator] = aeval_tmp_neg_0[iterator - 1];
  USER_busy_def[iterator] = USER_busy_def[iterator - 1];
  USER_xact_bound[iterator] = USER_xact_bound[iterator - 1];
  USER_read_cmd[iterator] = USER_read_cmd[iterator - 1];
  USER_write_cmd[iterator] = USER_write_cmd[iterator - 1];
  USER_xreg_def[iterator] = USER_xreg_def[iterator - 1];
  historically_0_holds[iterator] = historically_0_holds[iterator - 1];
  USER_xvalue_bound_0[iterator] = USER_xvalue_bound_0[iterator - 1];
  aeval_tmp_rand_int_10[iterator] = aeval_tmp_rand_int_10[iterator - 1];
  USER_xvalue[iterator] = USER_xvalue[iterator - 1];
  USER_xindex_bound[iterator] = USER_xindex_bound[iterator - 1];
  USER_read_key[iterator] = USER_read_key[iterator - 1];
  USER_write_key[iterator] = USER_write_key[iterator - 1];
  aeval_tmp_neg_3[iterator] = aeval_tmp_neg_3[iterator - 1];
  aeval_tmp_neg_12[iterator] = aeval_tmp_neg_12[iterator - 1];
  historically_0_signal[iterator] = historically_0_signal[iterator - 1];
  aeval_tmp_rand_int_16[iterator] = aeval_tmp_rand_int_16[iterator - 1];
  aeval_tmp_rand_int_15[iterator] = aeval_tmp_rand_int_15[iterator - 1];
  aeval_tmp_neg_11[iterator] = aeval_tmp_neg_11[iterator - 1];
  aeval_tmp_neg_6[iterator] = aeval_tmp_neg_6[iterator - 1];
  aeval_tmp_rand_int_9[iterator] = aeval_tmp_rand_int_9[iterator - 1];
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


