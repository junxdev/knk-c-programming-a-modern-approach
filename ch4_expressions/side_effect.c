#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[] = {1, 2, 3}, i = 0;

  a[i++] = a[0] + 2;

  printf("{%d, %d, %d}\n", a[0], a[1], a[2]);
  return 0;
}
