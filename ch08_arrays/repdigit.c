/* Check numbers for repeated digits */

#include <stdbool.h> /* C99 only */
#include <stdio.h>

// #define true 1
// #define false 0
// typedef int bool;

int main(int argc, char const *argv[])
{
  bool digit_seen[10] = {false};
  int digit;
  long n;

  printf("Enter a number: ");
  scanf("%ld", &n);

  while (n > 0)
  {
    digit = n % 10;
    if (digit_seen[digit])
      break;
    digit_seen[digit] = true;
    n /= 10;
  }

  if (n > 0)
    printf("Repeated digit\n");
  else
    printf("No repeated digit\n");
    
  return 0;
}
