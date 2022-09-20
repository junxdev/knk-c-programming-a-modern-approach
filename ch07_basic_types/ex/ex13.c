#include <stdio.h>

int main(int argc, char const *argv[])
{
  char c = '\1';
  short s = 2;
  int i = -3;
  long m = 5;
  float f = 6.5f;
  double d = 7.5;

  printf("(a) c * i = %d\n", c * i);    // -3
  printf("(b) s + m = %d\n", s + m);    // 7
  printf("(c) f / c = %g\n", f / c);    // 6.5
  printf("(d) d / s = %g\n", d / s);    // 3.75
  printf("(e) f - d = %g\n", f - d);    // -1.0
  printf("(f) (int) f = %d\n", (int)f); // 6

  return 0;
}