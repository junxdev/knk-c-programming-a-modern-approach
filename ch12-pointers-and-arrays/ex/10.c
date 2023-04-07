#include <stdio.h>

// original on
// int *find_middle(int a[], int n)
// {
//   return &a[n / 2];
// }

int *find_middle(int a[], int n)
{
  return a + (n / 2);
}

int main(int argc, char const *argv[])
{
  int a[] = {1, 2, 3, 4, 5};

  printf("The middle element of a: %d\n", *find_middle(a, 5)); // 3
  return 0;
}
