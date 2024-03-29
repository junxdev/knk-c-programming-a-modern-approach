#include <stdio.h>

void swap(int a, int b);

int main(int argc, char const *argv[])
{
  int i = 1, j = 2;

  swap(i, j);
  printf("i = %d, j = %d\n", i, j); // i = 1, j = 2
  return 0;
}

void swap(int a, int b)
{
  int temp = a;
  a = b;
  b = temp;
}