#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP  20
main () {
  int F;
  for (F = LOWER; F <= UPPER; F = F + STEP) {
    printf("%3d %6.1f\n",F,(5.0/9.0)*(F-32));
  }
}
