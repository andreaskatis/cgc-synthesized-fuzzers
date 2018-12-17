#include "little.h"

static int init = 0;
int pre_st[1];
int st[1];
int i[1];

void skolem_0() {
  if ((((init == 0) && ((st[0]) == 0)) || (!(init == 0))) && ((!((st[0]) <= 0)) && ((!((st[0]) <= ((-1)))) && ((!((st[0]) <= 1)) && (!((st[0]) <= 2)))))) {
  pre_st[0] = (init == 0) ? (0) : (st[0]);
  i[0] = 1;
  st[0] = 2;
} else {
  if ((((init == 0) && ((st[0]) == 0)) || (!(init == 0))) && ((!(0 <= (st[0]))) && ((!(((-1)) <= (st[0]))) && ((!(1 <= (st[0]))) && (!(2 <= (st[0]))))))) {
  pre_st[0] = (init == 0) ? (0) : (st[0]);
  i[0] = 1;
  st[0] = 2;
} else {
  if ((!(init == 0)) && ((st[0]) == ((-1)))) {
  pre_st[0] = (init == 0) ? (0) : (st[0]);
  i[0] = 1;
  st[0] = 1;
} else {
  if ((init == 0) || ((!(init == 0)) && ((st[0]) == 0))) {
  pre_st[0] = (init == 0) ? (0) : (st[0]);
  i[0] = 1;
  st[0] = 1;
} else {
  if ((!(init == 0)) && ((st[0]) == 1)) {
  pre_st[0] = (init == 0) ? (0) : (st[0]);
  i[0] = 0;
  st[0] = (-1);
} else {
  if ((!(init == 0)) && ((st[0]) == 2)) {
  pre_st[0] = (init == 0) ? (0) : (st[0]);
  i[0] = 1;
  st[0] = 1;
} else {
  return;
}

}

}

}

}

}

  return;
}


void updateFunction() {
if (init == 0) {
  skolem_0();
  init = init + 1;
} else {
  skolem_0();
}
return;
}


