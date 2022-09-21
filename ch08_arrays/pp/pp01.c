/* Check numbers for repeated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

#define DIGITS 10

int main(int argc, char const *argv[])
{
  bool digit_seen[DIGITS] = {false};
  bool digit_repeated[DIGITS] = {false};
  int digit, i;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0)
  {
    digit = n % 10;
    if (digit_seen[digit] && !digit_repeated[digit])
    {
      digit_repeated[digit] = true;
    }

    digit_seen[digit] = true;
    n /= 10;
  }

  printf("Repeated digit(s):");
  for (i = 0; i < DIGITS; i++)
  {
    if (digit_repeated[i])
      printf(" %d", i);
  }

  return 0;
}
