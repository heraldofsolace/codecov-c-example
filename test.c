#include <assert.h>
#include "lib.h"
int main() {
  assert(f1(5) == 2);
  assert(f2() == 1);
  assert(f1(20) == 21);
}
