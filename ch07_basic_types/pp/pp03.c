/* Sums a series of numbers (using long variables) */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  double n, sum = 0;

  printf("This program sums a series of doubles.\n");
  printf("Enter doubles (0 to terminate): ");

  scanf("%lf", &n);
  while (n != 0) {
    sum += n;
    scanf("%lf", &n);
  }

  printf("The sum is: %lg\n", sum);
  return 0;
}
