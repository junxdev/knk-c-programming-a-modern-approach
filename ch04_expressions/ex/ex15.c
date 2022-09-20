#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j;
  double k;

  i = 1, j = 2;
  k = i += j;
  printf("(a) %d, %d\n", i, j); // 3, 2

  i = 1, j = 2;
  k = i--;
  printf("(b) %d, %d\n", i, j); // 0, 2

  i = 1, j = 2;
  k = i * j / i;
  printf("(c) %d, %d\n", i, j); // 1, 2

  i = 1, j = 2;
  k = i % ++j;
  printf("(d) %d, %d\n", i, j); // 1, 3

  return 0;
}
