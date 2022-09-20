#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;

  for (i = 10; i >= 1; i /= 2)
  {
    printf("%d ", i++);
  }

  return 0;
}

/*
Output:
10 5 3 2 1 1 1 1 1 1...
*/
