#include <stdio.h>
#include <stdbool.h>

int find_largest(int *a, int n);

int main(int argc, char const *argv[])
{
  int temperatures[7][24] = {[3][15] = 32}, i;

  for (i = 0; i < 7; i++)
  {
    printf("%d ", find_largest(temperatures[i], 24));
  }
  printf("\n");

  return 0;
}

int find_largest(int *a, int n)
{
  int *p, *largest = a;

  for (p = a + 1; p < a + n; p++)
  {
    if (*largest < *p)
      *largest = *p;
  }

  return *largest;
}