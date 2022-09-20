#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;

  i = 1;
  printf("(i += 1) => %d\n", (i += 1));

  i = 1;
  printf("++i => %d\n", ++i);

  i = 1;
  printf("i++ => %d\n", i++);

  return 0;
}
