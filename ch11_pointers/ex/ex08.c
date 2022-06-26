#include <stdio.h>

int *find_largest(int[], int);

int main(int argc, char const *argv[])
{
  int a[] = {1, 2, 3}, n = 3, *x;

  x = find_largest(a, n);

  printf("%d\n", *x);

  return 0;
}

int *find_largest(int a[], int n)
{
  int *x = &a[0];

  for (int i = 1; i < n; i++)
  {
    if (a[i] > *x)
    {
      *x = a[i];
    }
  }

  return x;
}