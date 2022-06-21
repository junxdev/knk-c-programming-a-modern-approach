#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j, *p = &i;

  i = 5;

  // printf("%d\n", &i); // address != int
  printf("%d\n", i);
  printf("%d\n", *p);

  j = *&i;

  printf("%d\n", j);

  int *q;

  printf("%d\n", *q);

  *q = 1;

  printf("%d\n", *q); // bus error

  return 0;
}
