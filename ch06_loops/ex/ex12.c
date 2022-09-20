#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  int n, d;
  bool is_prime = true;

  printf("Enter the number: ");
  scanf("%d", &n);

  for (d = 2; d * d < n; d++)
  {
    if (n % d == 0)
    {
      is_prime = false;
      break;
    }
  }

  if (is_prime)
  {
    printf("%d is prime", n);
  }
  else
  {
    printf("%d is not prime", n);
  }

  return 0;
}
