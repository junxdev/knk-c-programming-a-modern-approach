#include <stdio.h>

int digit(int n, int k);

int main(int argc, char const *argv[])
{
  int n, k;

  printf("Enter n k: ");
  scanf("%d %d", &n, &k);

  printf("%d\n", digit(n, k));

  return 0;
}

int digit(int n, int k)
{
  while (k > 1)
  {
    k--;
    n /= 10;
  }

  return n % 10;
}
