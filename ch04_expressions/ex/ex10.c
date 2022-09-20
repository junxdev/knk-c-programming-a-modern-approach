#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j;

  i = 6;
  j = i += i;
  printf("(a) %d %d\n", i, j); // 12, 12

  i = 5;
  j = (i -= 2) + 1;
  printf("(b) %d %d\n", i, j); // 3, 4

  // i = 7;
  // j = 6 + (i = 2.5); // assign double to int
  // printf("(c) %d %d\n", i, j); // error

  // i = 2, j = 8;
  // j = (i = 6) + (j = 3); // multiple assignment at the same line
  // printf("(d) %d %d\n", i, j); // error

  return 0;
}
