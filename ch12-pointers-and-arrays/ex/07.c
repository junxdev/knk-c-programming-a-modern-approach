#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(int argc, char const *argv[])
{
  int a[] = {1, 2, 3, 4, 5};

  printf("0 is in a? %d\n", search(a, 5, 0)); // 0
  printf("5 is in a? %d\n", search(a, 5, 5)); // 1
  return 0;
}

bool search(const int a[], int n, int key)
{
  int *p;

  for (p = a; p < a + n; p++)
  {
    if (*p == key)
      return true;
  }
  return false;
}