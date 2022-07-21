#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n;

  n = 1;
  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n"); // it works

  n = 0;
  if (n >= 1 <= 10)
    printf("n is between 1 and 10\n"); // it works too because n >= 1 returns 0 and 0 is smaller than 10
  return 0;
}
