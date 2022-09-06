/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, n, odd, square;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%d", &n);

  i = 1;
  square = 1;
  odd = 3;

  for (i = 1; i <= n; i++)
  {
    printf("%10d%10d\n", i, square);
    square += odd;
    odd += 2;
  }

  return 0;
}

