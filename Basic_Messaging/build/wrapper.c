#include "basic_messaging.h"
#include <stdlib.h>
#include <time.h>

typedef struct genStr {
  int length;
  int chas[100];
} genStr_t;

typedef struct msg {
  int main;
  genStr string;
  int index1;
  int index2;
  int user;
  int messID;
} msg_t;

extern int generateRandomValue(_Bool lflag, _Bool uflag, int lbound, int ubound) {
  int min = lflag ? lbound : lbound+1;
  int max = uflag ? ubound : ubound-1;
  int range = max - min + 1;
  double rnd = ((double) rand())/(1.0 + ((double) RAND_MAX));
  int value = ((int) (((double) range)*rnd));
  return value + min;
}

msg_t step() {
  srand(time(NULL));
  updateFunction();
  msg_t msg;
  msg.main            = main[0];

  msg.string.length   = length[0];
  msg.string.chas[0]  = strCha0[0];
  msg.string.chas[1]  = strCha1[0];
  msg.string.chas[2]  = strCha2[0];
  msg.string.chas[3]  = strCha3[0];
  msg.string.chas[4]  = strCha4[0];
  msg.string.chas[5]  = strCha5[0];
  msg.string.chas[6]  = strCha6[0];
  msg.string.chas[7]  = strCha7[0];
  msg.string.chas[8]  = strCha8[0];
  msg.string.chas[9]  = strCha9[0];
  msg.string.chas[10] = strCha10[0];
  msg.string.chas[11] = strCha11[0];
  msg.string.chas[12] = strCha12[0];
  msg.string.chas[13] = strCha13[0];
  msg.string.chas[14] = strCha14[0];
  msg.string.chas[15] = strCha15[0];
  msg.string.chas[16] = strCha16[0];
  msg.string.chas[17] = strCha17[0];
  msg.string.chas[18] = strCha18[0];
  msg.string.chas[19] = strCha19[0];
  msg.string.chas[20] = strCha20[0];
  msg.string.chas[21] = strCha21[0];
  msg.string.chas[22] = strCha22[0];
  msg.string.chas[23] = strCha23[0];
  msg.string.chas[24] = strCha24[0];
  msg.string.chas[25] = strCha25[0];
  msg.string.chas[26] = strCha26[0];
  msg.string.chas[27] = strCha27[0];
  msg.string.chas[28] = strCha28[0];
  msg.string.chas[29] = strCha29[0];
  msg.string.chas[30] = strCha30[0];
  msg.string.chas[31] = strCha31[0];
  msg.string.chas[32] = strCha32[0];
  msg.string.chas[33] = strCha33[0];
  msg.string.chas[34] = strCha34[0];
  msg.string.chas[35] = strCha35[0];
  msg.string.chas[36] = strCha36[0];
  msg.string.chas[37] = strCha37[0];
  msg.string.chas[38] = strCha38[0];
  msg.string.chas[39] = strCha39[0];
  msg.string.chas[40] = strCha40[0];
  msg.string.chas[41] = strCha41[0];
  msg.string.chas[42] = strCha42[0];
  msg.string.chas[43] = strCha43[0];
  msg.string.chas[44] = strCha44[0];
  msg.string.chas[45] = strCha45[0];
  msg.string.chas[46] = strCha46[0];
  msg.string.chas[47] = strCha47[0];
  msg.string.chas[48] = strCha48[0];
  msg.string.chas[49] = strCha49[0];
  msg.string.chas[50] = strCha50[0];
  msg.string.chas[51] = strCha51[0];
  msg.string.chas[52] = strCha52[0];
  msg.string.chas[53] = strCha53[0];
  msg.string.chas[54] = strCha54[0];
  msg.string.chas[55] = strCha55[0];
  msg.string.chas[56] = strCha56[0];
  msg.string.chas[57] = strCha57[0];
  msg.string.chas[58] = strCha58[0];
  msg.string.chas[59] = strCha59[0];
  msg.string.chas[60] = strCha60[0];
  msg.string.chas[61] = strCha61[0];
  msg.string.chas[62] = strCha62[0];
  msg.string.chas[63] = strCha63[0];
  msg.string.chas[64] = strCha64[0];
  msg.string.chas[65] = strCha65[0];
  msg.string.chas[66] = strCha66[0];
  msg.string.chas[67] = strCha67[0];
  msg.string.chas[68] = strCha68[0];
  msg.string.chas[69] = strCha69[0];
  msg.string.chas[70] = strCha70[0];
  msg.string.chas[71] = strCha71[0];
  msg.string.chas[72] = strCha72[0];
  msg.string.chas[73] = strCha73[0];
  msg.string.chas[74] = strCha74[0];
  msg.string.chas[75] = strCha75[0];
  msg.string.chas[76] = strCha76[0];
  msg.string.chas[77] = strCha77[0];
  msg.string.chas[78] = strCha78[0];
  msg.string.chas[79] = strCha79[0];
  msg.string.chas[80] = strCha80[0];
  msg.string.chas[81] = strCha81[0];
  msg.string.chas[82] = strCha82[0];
  msg.string.chas[83] = strCha83[0];
  msg.string.chas[84] = strCha84[0];
  msg.string.chas[85] = strCha85[0];
  msg.string.chas[86] = strCha86[0];
  msg.string.chas[87] = strCha87[0];
  msg.string.chas[88] = strCha88[0];
  msg.string.chas[89] = strCha89[0];
  msg.string.chas[90] = strCha90[0];
  msg.string.chas[91] = strCha91[0];
  msg.string.chas[92] = strCha92[0];
  msg.string.chas[93] = strCha93[0];
  msg.string.chas[94] = strCha94[0];
  msg.string.chas[95] = strCha95[0];
  msg.string.chas[96] = strCha96[0];
  msg.string.chas[97] = strCha97[0];
  msg.string.chas[98] = strCha98[0];
  msg.string.chas[99] = strCha99[0];

  msg.index1          = index1[0];
  msg.index2          = index2[0];
  msg.user            = user[0];
  msg.messID          = messID[0];
  return msg;
}
