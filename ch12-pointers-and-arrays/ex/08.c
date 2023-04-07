#include <stdio.h>

void store_zeros(int a[], int n)
{
  int *p;

  for (p = a; p < a + n; p++)
  {
    *p = 0;
  }
}

int main(int argc, char const *argv[])
{
  int a[5];

  store_zeros(a, 5);

  printf("The first element is 0? %d\n", a[0] == 0); // 1
  printf("The last element is 0? %d\n", a[5] == 0);  // 1

  return 0;
}
