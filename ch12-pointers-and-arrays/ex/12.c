#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(int argc, char const *argv[])
{
  int a[] = {2, 3, 8, 4, 6}, largest, second_largest;

  find_two_largest(a, 5, &largest, &second_largest);

  printf("The largest is %d\n", largest);
  printf("The second largest is %d\n", second_largest);

  return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
  const int *p;
  *largest = *a;
  *second_largest = *a;

  for (p = a + 1; p < a + n; p++)
  {
    if (*p > *largest)
    {
      *second_largest = *largest;
      *largest = *p;
    }
    else if (*p > *second_largest)
    {
      *second_largest = *p;
    }
  }
}