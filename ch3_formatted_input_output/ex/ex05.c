#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;
  float x, y;

  scanf("%f%d%f", &x, &i, &y);

  /*
    If the user enters 12.3 45.6 789
    x = 12.3
    i = 45
    y = .6
  */

  printf("%f, %d, %f", x, i, y);

  return 0;
}
