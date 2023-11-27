#include <stdio.h>

int main() {
  int c;
  int nl, tl, pl;
  nl = tl = pl = 0;
  while ((c = getchar()) != EOF)
    if (c == '\n' ) {
      ++nl;
      putchar('n');
    }
    else if (c == '\t' ) {
      ++tl;
      putchar('t');
    }
    else if (c == ' ' ) {
      ++pl;
      putchar('p');
    }
  printf("\nnew string -> %d\ntabulation -> %d\nspaces -> %d\n  ", nl, tl, pl);
}
