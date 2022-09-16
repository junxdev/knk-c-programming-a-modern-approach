#include <stdio.h>

int main(int argc, char const *argv[])
{
  typedef long double number;

  int n;
  number f;

  f = 1.0;
  n = 2;

  // printf("Enter a positive integer: ");
  // scanf("%d", &n);

  while ((number)(f * n) > f)
  {
    f *= n;
    n++;
  }

  // for (int i = 1; i <= n; i++)
  // {
  //   f *= i;
  // }

  printf("Factorial of %d: %llf\n", n - 2, f);

  return 0;
}

/*
  short: 7
  int: 13
  long: 20
  long long: 20
  float: 34
  double: 170
  long double: 1754
*/