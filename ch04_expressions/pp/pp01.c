#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number;

  printf("Enter a two-digit number: ");
  scanf("%d", &number);

  printf("The reversal is: %d%d\n", number % 10, number / 10);

  return 0;
}
