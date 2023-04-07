#include <stdio.h>

int find_largest(int a[], int n)
{
  int *p, *largest = a;

  for (p = a + 1; p < a + n; p++)
  {
    if (*largest < *p)
      largest = p;
  }

  return *largest;
}

int main(int argc, char const *argv[])
{
  int a[] = {6, 2, 8, 4, 7};

  printf("The largest number in a? %d\n", find_largest(a, 5)); // 8
  return 0;
}
