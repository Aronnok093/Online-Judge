#include<stdio.h>
#define sf scanf
#define pf printf

int main() {
  int a, b, c, i;
  while (sf("%d", & a) == 1) {
    for (i = 0; i < a; i++) {
      sf("%d%d", & b, & c);
      if (b > c)
        pf(">\n");
      else if (b < c)
        pf("<\n");
      else
        pf("=\n");
    }
  }
  return 0;
}
