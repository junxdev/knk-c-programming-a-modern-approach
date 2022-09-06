#include <stdio.h>

int main(int argc, char const *argv[])
{

  for (int i = 9384; i /= 10 > 0;)
  {
    printf("%d ", i);
    i /= 10;
  }

  return 0;
}

/*
Output:
9384 938 93 9
*/