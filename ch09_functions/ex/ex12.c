#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(int argc, char const *argv[])
{
  int n = 5;
  double a[5] = {3, 2, 5, 6, 3};
  double b[5] = {1, 9, 2, 2, 4};

  printf("%g\n", inner_product(a, b, n));

  return 0;
}

double inner_product(double a[], double b[], int n)
{
  double result = 0;
  for (int i = 0; i < n; i++)
  {
    result += a[i] * b[i];
  }
  return result;
}
