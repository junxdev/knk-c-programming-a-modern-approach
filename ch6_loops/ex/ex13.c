#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n, m;

  m = 21;
  for (n = 0; m > 0; n++)
  {
    m /= 2;
  }
  printf("n: %d, m: %d\n", n, m);

  m = 20;
  for (n = 0; m > 0; n++, m /= 2)
    ;
  printf("n: %d, m: %d\n", n, m);

  return 0;
}
