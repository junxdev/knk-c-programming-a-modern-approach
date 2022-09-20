#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;

  i = 10;
  while (i < 10)
  {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  i = 10;
  for (; i < 10;)
  {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  i = 10;
  do
  {
    printf("%d ", i);
    i++;
  } while (i < 10);

  return 0;
}

/*
Third one is different from other's outputs because it excutes do expression before checking the condition.
*/
