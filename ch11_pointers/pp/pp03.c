#include <stdio.h>

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(int argc, char const *argv[])
{
  int num, denom, reduced_numerator, reduced_denominator;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  reduce(num, denom, &reduced_numerator, &reduced_denominator);

  printf("In lowest terms: %d/%d\n", reduced_numerator, reduced_denominator);

  return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator)
{
  int gcd, n, remainder;

  gcd = numerator;
  n = denominator;

  while (n > 0)
  {
    remainder = gcd % n;
    gcd = n;
    n = remainder;
  }

  *reduced_numerator = numerator / gcd;
  *reduced_denominator = denominator / gcd;
}
