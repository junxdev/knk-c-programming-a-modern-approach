#include <stdio.h>

int main(int argc, char const *argv[])
{
  float e = 1.0f;
  int n, factorial = 1;

  printf("Enter a number: ");
  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    factorial *= i;
    e += 1.0f / factorial;
  }

  printf("Constant e is %f", e);

  return 0;
}
