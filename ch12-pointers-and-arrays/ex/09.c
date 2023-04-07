#include <stdio.h>

double inner_product(const double *a, const double *b, int n);

int main(int argc, char const *argv[])
{
  double a[] = {1, 2, 3}, b[] = {3, 2, 1};
  printf("The result: %g\n", inner_product(a, b, 3)); // 10
  return 0;
}

double inner_product(const double *a, const double *b, int n)
{
  double sum;

  for (int i = 0; i < n; i++)
  {
    sum += *a++ * *b++;
  }

  return sum;
}