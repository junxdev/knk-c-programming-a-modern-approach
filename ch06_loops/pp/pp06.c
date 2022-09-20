#include <stdio.h>

int main(int argc, char const *argv[])
{
  int n, limit;

  printf("Enter a number: ");
  scanf("%d", &limit);

  for (n = 2; n * n <= limit; n += 2)
  {
    printf("%d\n", n * n);
  }

  return 0;
}
