#include <stdio.h>

int gcd(int m, int n);

int main(int argc, char const *argv[])
{
  int m, n;

  printf("Enter two integers: ");
  scanf("%d %d", &m, &n);

  printf("Greatest common divisor: %d\n", gcd(m, n));

  return 0;
}

int gcd(int m, int n)
{
  return n == 0 ? m : gcd(n, m % n);
}