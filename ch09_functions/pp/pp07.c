#include <stdio.h>

int power(int x, int n);

int main(int argc, char const *argv[])
{
  int x, n;
  
  printf("Enter the number and power: ");
  scanf("%d %d", &x, &n);

  printf("The result is %d\n", power(x, n));

  return 0;
}

int power(int x, int n)
{
  if (n == 0)
    return 1;

  if (n % 2)
  {
    return power(x, n - 1) * x;
  }
  else
  {
    return power(x, n / 2) * power(x, n / 2);
  }
}