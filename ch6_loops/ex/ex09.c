#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = 10;

  while (i >= 1)
  {
    printf("%d ", i++);
    i /= 2;
  }

  return 0;
}

/*
Output:
10 5 3 2 1 1 1 1 1 1...
*/
