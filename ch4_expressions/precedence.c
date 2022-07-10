#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b = 0, c = 1, d = 2, e = 5, f = 2;

  a = b += c++ - d + --e / -f;

  printf("%d %d %d %d %d %d\n", a, b, c, d, e, f);
  return 0;
}
