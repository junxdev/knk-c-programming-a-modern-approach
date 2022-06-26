#include <stdio.h>

void swap(int *, int *);

int main(int argc, char const *argv[])
{
  int i = 1, j = 2;
  swap(&j, &i);

  printf("i: %d\n", i);
  printf("j: %d\n", j);

  return 0;
}

void swap(int *p, int *q)
{
  int i = *p;
  *p = *q;
  *q = i;
}
