#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n;

  n = 1;
  if (n == 1 - 10)
    printf("n is between 1 and 10\n"); // it won't work

  n = 5;
  if (n == 1 - 10)
    printf("n is between 1 and 10\n"); // it won't work too
  return 0;
}
