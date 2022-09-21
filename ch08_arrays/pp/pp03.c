/* Check numbers for repeated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

// #define true 1
// #define false 0
// typedef int bool;

int main(int argc, char const *argv[])
{
  bool digit_seen[10] = {false}, digit_repeated = false;
  int digit;
  long n;

  while (!digit_repeated)
  {
    printf("Enter a number: ");
    scanf("%ld", &n);

    if (n <= 0)
      break;

    while (n > 0)
    {
      digit = n % 10;
      if (digit_seen[digit])
      {
        digit_repeated = true;
        break;
      }
      digit_seen[digit] = true;
      n /= 10;
    }
  }

  if (digit_repeated)
    printf("Repeated digit\n");
  else
    printf("No repeated digit\n");

  return 0;
}
