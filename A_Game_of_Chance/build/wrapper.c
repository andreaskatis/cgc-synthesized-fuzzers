#include "A_Game_of_Chance.h"
#include <stdlib.h>
#include <unistd.h>
#include <sys/syscall.h>
#include <time.h>
#include <stdio.h>
typedef struct msg {
	double command;
	double size;
	double deck[127];
	double snd;
} msg_t;

extern double generateRandomValue(_Bool lflag, _Bool uflag, double lbound, double ubound) {
  if (lbound == 0 && ubound == 0 && !lflag && !uflag) {
    return (double) rand();
  } else {
      double min = lflag ? lbound : lbound+0.001;
      double max = uflag ? ubound : ubound-0.001;
      double range = max - min;
      double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
      double value = ((double) (((double) range)*rnd));
      return value + min;
  }
}

extern double generateRandomValueExcl(double excl1, _Bool lflag, _Bool uflag, double lbound, double ubound) {
  double min = (lflag && excl1 != lbound) ? lbound : lbound+0.001;
  double max = (uflag && excl1 != ubound) ? ubound : ubound-0.001;
  double range = max - min;
  if (range == 1) {
    return max;
  } else {
    double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
    double value = ((double) (((double) range)*rnd));
    double res = value + min;
    if (res == excl1) {
      generateRandomValueExcl(excl1, lflag, uflag, min, max);
    } else {
      return res;
    }
  }
}

msg_t step(_Bool cvrg){
	srand(time(NULL));
	cvg[0] = cvrg;
	updateFunction();
	msg_t msg;
	msg.size      = deck_size[0];
	msg.command   = option[0];
	msg.deck[28]  = c29[0];
	msg.deck[29]  = c30[0];
	msg.deck[30]  = c31[0];
	msg.deck[31]  = c32[0];
	msg.deck[32]  = c33[0];
	msg.deck[33]  = c34[0];
	msg.deck[34]  = c35[0];
	msg.deck[35]  = c36[0];
	msg.deck[36]  = c37[0];
	msg.deck[37]  = c38[0];
	msg.deck[38]  = c39[0];
	msg.deck[39]  = c40[0];
	msg.deck[40]  = c41[0];
	msg.deck[41]  = c42[0];
	msg.deck[42]  = c43[0];
	msg.deck[43]  = c44[0];
	msg.deck[44]  = c45[0];
	msg.deck[45]  = c46[0];
	msg.deck[46]  = c47[0];
	msg.deck[47]  = c48[0];
	msg.deck[48]  = c49[0];
	msg.deck[49]  = c50[0];
	msg.deck[50]  = c51[0];
	msg.deck[51]  = c52[0];
	msg.deck[52]  = c53[0];
	msg.deck[53]  = c54[0];
	msg.deck[54]  = c55[0];
	msg.deck[55]  = c56[0];
	msg.deck[56]  = c57[0];
	msg.deck[57]  = c58[0];
	msg.deck[58]  = c59[0];
	msg.deck[59]  = c60[0];
	msg.deck[60]  = c61[0];
	msg.deck[61]  = c62[0];
	msg.deck[62]  = c63[0];
	msg.deck[63]  = c64[0];
	msg.deck[64]  = c65[0];
	msg.deck[65]  = c66[0];
	msg.deck[66]  = c67[0];
	msg.deck[67]  = c68[0];
	msg.deck[68]  = c69[0];
	msg.deck[69]  = c70[0];
	msg.deck[70]  = c71[0];
	msg.deck[71]  = c72[0];
	msg.deck[72]  = c73[0];
	msg.deck[73]  = c74[0];
	msg.deck[74]  = c75[0];
	msg.deck[75]  = c76[0];
	msg.deck[76]  = c77[0];
	msg.deck[77]  = c78[0];
	msg.deck[78]  = c79[0];
	msg.deck[79]  = c80[0];
	msg.deck[80]  = c81[0];
	msg.deck[81]  = c82[0];
	msg.deck[82]  = c83[0];
	msg.deck[83]  = c84[0];
	msg.deck[84]  = c85[0];
	msg.deck[85]  = c86[0];
	msg.deck[86]  = c87[0];
	msg.deck[87]  = c88[0];
	msg.deck[88]  = c89[0];
	msg.deck[89]  = c90[0];
	msg.deck[90]  = c91[0];
	msg.deck[91]  = c92[0];
	msg.deck[92]  = c93[0];
	msg.deck[93]  = c94[0];
	msg.deck[94]  = c95[0];
	msg.deck[95]  = c96[0];
	msg.deck[96]  = c97[0];
	msg.deck[97]  = c98[0];
	msg.deck[98]  = c99[0];
	msg.deck[99]  = c100[0];
	msg.deck[100]   = c101[0];
	msg.deck[101]   = c102[0];
	msg.deck[102]   = c103[0];
	msg.deck[103]   = c104[0];
	msg.deck[104]   = c105[0];
	msg.deck[105]   = c106[0];
	msg.deck[106]   = c107[0];
	msg.deck[107]   = c108[0];
	msg.deck[108]   = c109[0];
	msg.deck[109]   = c110[0];
	msg.deck[110]  = c111[0];
	msg.deck[111]  = c112[0];
	msg.deck[112]  = c113[0];
	msg.deck[113]  = c114[0];
	msg.deck[114]  = c115[0];
	msg.deck[115]  = c116[0];
	msg.deck[116]  = c117[0];
	msg.deck[117]  = c118[0];
	msg.deck[118]  = c119[0];
	msg.deck[119]  = c120[0];
	msg.deck[120]  = c121[0];
	msg.deck[121]  = c122[0];
	msg.deck[122]  = c123[0];
	msg.deck[123]  = c124[0];
	msg.deck[124]  = c125[0];
	msg.deck[125]  = c126[0];
	msg.deck[126]  = c127[0];
	msg.snd = snd[0];
	return msg;
}

// void main(_Bool cvg) {
// 	while(1) {
//   step();
// }
//   return;
// }