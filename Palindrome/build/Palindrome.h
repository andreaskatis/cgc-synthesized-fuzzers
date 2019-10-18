#ifndef _PALINDROME
#define _PALINDROME

#include <stdlib.h>

extern _Bool cvg[2];

extern double aeval_tmp_rand_real_1[2];
extern double aeval_tmp_rand_real_0[2];
extern double aeval_tmp_rand_real_5[2];
extern double aeval_tmp_rand_real_4[2];
extern double aeval_tmp_rand_real_3[2];
extern double aeval_tmp_rand_real_10[2];
extern double aeval_tmp_rand_real_9[2];
extern double location[2];
extern double aeval_tmp_rand_real_6[2];
extern double aeval_tmp_rand_real_8[2];
extern double aeval_tmp_rand_real_13[2];
extern double aeval_tmp_rand_real_14[2];
extern double aeval_tmp_rand_real_7[2];
extern _Bool guarantee_cvg_cha[2];
extern double option[2];
extern double aeval_tmp_rand_real_11[2];
extern double delta_cha[2];
extern _Bool guarantee_delta_cha[2];
extern double aeval_tmp_rand_real_12[2];
extern double aeval_tmp_rand_real_2[2];
extern double cha[2];

extern void skolem_0();

extern void skolem_1();

extern void moveHistory();

extern void updateFunction();

extern double generateRandomValue(_Bool lflag, _Bool uflag, double lbound, double ubound);

#endif
