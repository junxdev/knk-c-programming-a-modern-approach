#include <stdio.h>

int num_digits(int n);

int main(int argc, char const *argv[])
{
  int n;

  printf("Enter the number: ");
  scanf("%d", &n);

  printf("%d\n", num_digits(n));

  return 0;
}

int num_digits(int n)
{
  int digits = 0;

  while (n > 0)
  {
    digits++;
    n /= 10;
  }

  return digits;
}
