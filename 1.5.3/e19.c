#include <stdio.h>
main () {
  int c, s;
  s = 0;
  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      while ((c = getchar()) == ' ') {}
      putchar(' ');
    }
    putchar(c);
  }
}
