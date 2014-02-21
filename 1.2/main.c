#include <stdio.h>
main () {
  int F, C;
  int l, u, s;
  l = 0;
  u = 300;
  s = 20;
  F = l;
  while (F <= u) {
    C = 5 * (F-32) / 9;
    printf("%d\t%d\n",F,C);
    F = F + s;
  }
}
/*

  %d decimal integer
  %6d decimal integer at least 6 characters wide
  %f floating point
  %6f floating point at least 6 characters wide
  %.2f floating point 2 characters wide after decimal
  %6.2f floating point at least 6 characters wide and 2 after decimal
  %o octal
  %x hexadecimal
  %c character
  %s character string
  %% itself

*/
