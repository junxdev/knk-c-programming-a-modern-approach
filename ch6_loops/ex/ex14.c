#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n;

  n = 11;
  if (n % 2 == 0)
    ;
  printf("n is even\n");

  if (n % 2 == 0)
    printf("n is even\n");

  return 0;
}

/*
Remove the semicolon followed if statement.
 */
