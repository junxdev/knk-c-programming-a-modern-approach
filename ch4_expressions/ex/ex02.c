#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = 9, j = 7;

  printf("(-i) / j = %d\n", (-i) / j);
  printf("-(i / j) = %d\n", -(i / j));

  /* They can't be same always because -9 / 7 might result -2 in C89. */
  return 0;
}
