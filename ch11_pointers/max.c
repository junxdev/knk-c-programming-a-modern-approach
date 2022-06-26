#include <stdio.h>

int *max(int *, int *);

int main(int argc, char const *argv[])
{
  int *p, i = 3, j = 5;
  p = max(&i, &j);
  printf("%d\n", *p);
  return 0;
}

int *max(int *a, int *b)
{
  if (*a > *b)
  return a;
  else
  return b;
}