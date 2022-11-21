#include <stdio.h>

int check(int x, int y, int n);

int main(int argc, char const *argv[])
{
  int x, y, n;

  // return 0
  x = 1, y = 2, n = 2;
  printf("%d\n", check(x, y, n));

  // return 1
  n = 3;
  printf("%d\n", check(x, y, n));

  return 0;
}

int check(int x, int y, int n)
{
  return (x > -1 && x < n && y > -1 && y < n);
}
