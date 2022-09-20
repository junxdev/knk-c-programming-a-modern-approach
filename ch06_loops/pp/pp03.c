#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num, denom, gcd, n, remainder;

  printf("Enter a fraction: ");
  scanf("%d/%d", &num, &denom);

  gcd = num;
  n = denom;

  while (n > 0)
  {
    remainder = gcd % n;
    gcd = n;
    n = remainder;
  }

  printf("In lowest terms: %d/%d", num / gcd, denom / gcd);

  return 0;
}
