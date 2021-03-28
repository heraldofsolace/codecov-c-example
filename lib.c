#include "lib.h"

int f1(int a) {
  if(a > 10) {
    return a + 1;
  } else {
    return 2;
  }
}

int f2() {
  int a = 1;
  return a++;
}
