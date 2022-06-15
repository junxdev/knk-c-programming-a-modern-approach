#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j;
  float x;

  scanf("%d%f%d", &i, &x, &j);

  /*
    If the user enters 10.3 5 6
    i = 10
    x = .3
    j = 5
  */

  printf("%d, %f, %d", i, x, j);

  return 0;
}
