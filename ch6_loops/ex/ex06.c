#include <stdio.h>

int main(int argc, char const *argv[])
{
  for (int i = 1; i <= 128; i *= 2)
  {
    printf("%d ", i);
  }
  return 0;
}

/*
Output:
1 2 4 8 16 32 64 128
*/