#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
  int x;
  double y, old_y;

  y = 1.0;

  printf("Enter a positive number: ");
  scanf("%d", &x);

  do
  {
    old_y = y;
    y = (y + (x / y)) / 2;
  } while (fabs(y - old_y) >= 0.00001);

  printf("Square root: %g\n", y);

  return 0;
}
