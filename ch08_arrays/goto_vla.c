#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 10;
  int b;

  goto after_declaration;
  b = 20;
  int c = 30;
  int d;

after_declaration:
{
  printf("(a) value: %d, size: %d\n", a, sizeof(a));
  printf("(b) value: %d, size: %d\n", b, sizeof(b));
  printf("(c) value: %d, size: %d\n", c, sizeof(c));
  printf("(d) value: %d, size: %d\n", d, sizeof(d));

  d = 40;
}

  return 0;
}
