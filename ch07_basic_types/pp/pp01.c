/* Prints a table of squares using a while statement */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  long i, n;

  printf("This program prints a table of squares.\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);

  for (i = 1; i <= n; i++)
  {
    if ((long)(i * i) < 0)
      break;
  }

  printf("%ld\n", i - 1);
  printf("%ld\n", (i - 1) * (i - 1));

  return 0;
}

/*
short -> smallest value is 182. It is between 8bit and 9bit, power of it would be bigger than 16bit. So, short is stored in 16bit.
int -> smallest value is 46,341. It is between 16bit and 17bit, power of it would be bigger than 32bit. So, int is stored in 32bit.
long -> smallest value is 3,037,000,500. It is between 32bit and 33bit, power of it would be bigger than 64bit. So, long is stored in 64bit.
 */
