#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j;

  i = 100000, j = 1;

  short x = i / j + 'a'; // warning: convert int to short

  printf("%d\n", x);

  return 0;
}
