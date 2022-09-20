#include "stdio.h"

int main(int argc, char const *argv[])
{
  int i, j;
  float x, y;

  i = 10;
  j = 20;
  x = 43.2892f;
  y=5527.0f;

  printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y);

  printf("%d %d\n", i);

  printf("%d\n", i, j);

  printf("%f %d\n", i, x);

  return 0;
}