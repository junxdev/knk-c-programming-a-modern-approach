#include <stdio.h>

int main(int argc, char const *argv[])
{
  float e, term, eps;
  int factorial, n;

  printf("Enter a number: ");
  scanf("%d", &n);
  printf("Enter an epsilon value: ");
  scanf("%f", &eps);

  e = 1.0f, term = 1.0f;
  factorial = 1;

  for (int i = 1; i <= n, term > eps; i++)
  {
    term = 1.0f / (factorial *= i);
    e += term;
  }

  printf("Constant e is %f", e);

  return 0;
}
