#include <stdio.h>

/*
16-bit CPU
*/
int main(int argc, char const *argv[])
{
  char a = 31; // days in a month
  printf("(a) %d\n", a);

  short b = 365; // days in a year
  printf("(b) %d\n", b);

  short c = 24 * 60; // minutes in a day = 1,440
  printf("(c) %d\n", c);

  long d = 24 * 60 * 60; // seconds in a day = 86,400
  printf("(d) %d\n", d);

  return 0;
}
