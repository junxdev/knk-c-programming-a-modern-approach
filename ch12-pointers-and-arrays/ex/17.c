#include <stdio.h>

#define LEN 19

int sum_two_dimensional_array(const int a[][LEN], int n)
{
  const int *p;
  int sum = 0;

  for (p = *a; p < *(a + n); p++)
  {
    sum += *p;
  }

  return sum;
}

int main(int argc, char const *argv[])
{
  int a[1][LEN] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  printf("%d\n", sum_two_dimensional_array(a, 1));

  return 0;
}
