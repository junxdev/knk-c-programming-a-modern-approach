#include <stdio.h>

void pb(int n)
{
  if (n != 0)
  {
    pb(n / 2);
    putchar('0' + n % 2);
  }
}

int main(int argc, char const *argv[])
{
  int n;

  printf("Enter the number: ");
  scanf("%d", &n);
  pb(n);

  return 0;
}

/*
  if n is 10

  pb(10)
    pb(5)
      pb(2)
        pb(1)
          pb(0)
        pb(1)   1
      pb(2)     10
    pb(5)       101
  pb(10)        1010

  it prints the binary result of the decimal value
*/