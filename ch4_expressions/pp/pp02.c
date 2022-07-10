#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number;

  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &number);

  printf("The reversal is: %d%d%d\n", number % 10, number / 10 % 10, number / 100);

  return 0;
}
