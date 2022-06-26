#include <stdio.h>

void f(const int *p)
{
  int j = 3;

  p = &j;
}

void g(int *const p)
{
  int j = 3;

  *p = j;
}

int main(int argc, char const *argv[])
{
  int k = 1;

  f(&k);

  printf("%d\n", k);

  g(&k);

  printf("%d\n", k);

  return 0;
}
