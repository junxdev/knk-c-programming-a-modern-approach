/* Check numbers for repeated digits */

#include <stdio.h>

#define DIGITS 10

int main(int argc, char const *argv[])
{
  int digit_seen[DIGITS] = {0};
  int digit, i;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0)
  {
    digit_seen[n % 10]++;
    n /= 10;
  }

  printf("Digit:\t");
  for (i = 0; i < DIGITS; i++)
  {
    printf("\t%d", i);
  }

  printf("\nOccurrences:");
  for (i = 0; i < DIGITS; i++)
  {
    printf("\t%d", digit_seen[i]);
  }

  return 0;
}
