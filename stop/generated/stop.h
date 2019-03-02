#ifndef _STOP
#define _STOP

#include <stdlib.h>

extern int USER_rindex[2];
extern int USER_rvalue[2];
extern int USER_cmd[2];

extern int aeval_tmp_neg_13[2];
extern int aeval_tmp_neg_8[2];
extern int aeval_tmp_neg_7[2];
extern int aeval_tmp_neg_5[2];
extern int aeval_tmp_neg_4[2];
extern _Bool USER_rvalue_satisfies_predicate[2];
extern _Bool USER_last_index_def[2];
extern _Bool USER_rindex_satisfies_predicate[2];
extern int aeval_tmp_neg_1[2];
extern int aeval_tmp_rand_int_14[2];
extern int aeval_tmp_neg_2[2];
extern _Bool USER_cmd_satisfies_predicate[2];
extern int USER_xact[2];
extern _Bool USER_busy[2];
extern int USER_xindex[2];
extern _Bool USER_twinkle_cmd_1[2];
extern _Bool USER_twinkle_cmd_2[2];
extern int USER_xreg[2];
extern int USER_last_index[2];
extern _Bool USER_xrw[2];
extern int aeval_tmp_neg_0[2];
extern _Bool USER_busy_def[2];
extern _Bool USER_xact_bound[2];
extern _Bool USER_read_cmd[2];
extern _Bool USER_write_cmd[2];
extern _Bool USER_xreg_def[2];
extern _Bool historically_0_holds[2];
extern _Bool USER_xvalue_bound_0[2];
extern int aeval_tmp_rand_int_10[2];
extern int USER_xvalue[2];
extern _Bool USER_xindex_bound[2];
extern _Bool USER_read_key[2];
extern _Bool USER_write_key[2];
extern int aeval_tmp_neg_3[2];
extern int aeval_tmp_neg_12[2];
extern _Bool historically_0_signal[2];
extern int aeval_tmp_rand_int_16[2];
extern int aeval_tmp_rand_int_15[2];
extern int aeval_tmp_neg_11[2];
extern int aeval_tmp_neg_6[2];
extern int aeval_tmp_rand_int_9[2];

extern void skolem_0();

extern void skolem_1();

extern void moveHistory();

extern void updateFunction();

extern int generateRandomValue(_Bool lflag, _Bool uflag, int lbound, int ubound);

#endif
