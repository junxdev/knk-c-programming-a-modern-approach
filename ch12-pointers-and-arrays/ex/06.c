#include <stdio.h>

int sum_array(const int a[], int n)
{
  int *p, sum;

  sum = 0;
  for (p = a; p < a + n; p++)
    sum += *p;

  return sum;
}

int main(int argc, char const *argv[])
{
  int a[] = {1, 2, 3, 4, 5};

  printf("The sum of a is %d\n", sum_array(a, 5));
  return 0;
}
