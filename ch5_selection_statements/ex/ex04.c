#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j;

  i = 1, j = 0;
  printf("i > j => %d\n", (i > j) - (i < j));
  i = 0, j = 0;
  printf("i == j => %d\n", (i > j) - (i < j));
  i = 0, j = 1;
  printf("i < j => %d\n", (i > j) - (i < j));
  return 0;
}
