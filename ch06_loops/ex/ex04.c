#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;

  for (i = 0; i < 10; i++)
    printf("%d ", i);
  printf("\n");
  for (i = 0; i < 10; ++i)
    printf("%d ", i);
  printf("\n");
  for (i = 0; i++ < 10;)
    printf("%d ", i);

  return 0;
}

/*
Third one is different from other's outputs because i++ happens before the comparison.
*/
