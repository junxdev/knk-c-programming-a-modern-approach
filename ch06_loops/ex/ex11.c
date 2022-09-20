#include <stdio.h>

int main(int argc, char const *argv[])
{
  int sum, i;

  sum = 0;

  for (i = 0; i < 10; i++)
  {
    if (i % 2)
      continue;
    sum += 1;
  }
  printf("%d\n", sum);

  return 0;
}

/*
Output:
5
*/
