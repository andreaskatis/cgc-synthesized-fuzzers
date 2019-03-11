#ifndef _SEMANTICS
#define _SEMANTICS

#include <stdlib.h>

extern double USER_val[2];

extern double aeval_tmp_rand_real_0[2];
extern double USER_fuzz[2];
extern double aeval_tmp_rand_real_1[2];
extern _Bool USER_out_req[2];
extern double USER_median[2];
extern _Bool USER_stx_req[2];
extern _Bool historically_0_holds[2];
extern double USER_st[2];
extern _Bool historically_0_signal[2];
extern _Bool USER_med_req[2];

extern void skolem_0();

extern void skolem_1();

extern void moveHistory();

extern void updateFunction();

extern double generateRandomValue(_Bool lflag, _Bool uflag, double lbound, double ubound);

extern double generateRandomValueExcl(_Bool lflag, _Bool uflag, double lbound, double ubound);

#endif
