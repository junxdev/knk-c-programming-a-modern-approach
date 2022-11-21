#include <stdio.h>

int calculate(int x);

int main(int argc, char const *argv[])
{
  int x;

  printf("Enter the number x: ");
  scanf("%d", &x);

  printf("The result is %d.\n", calculate(x));

  return 0;
}

int calculate(int x)
{
  return (3 * x * x * x * x * x) + (2 * x * x * x * x) + (-5 * x * x * x) + (-1 * x * x) + (7 * x) - 6;
}