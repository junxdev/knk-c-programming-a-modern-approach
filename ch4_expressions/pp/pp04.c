#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number;

  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);

  printf("In octal, your number is: %d%d%d%d%d\n", number / 8 / 8 / 8 / 8 % 8 % 10, number / 8 / 8 / 8 % 8 % 10, number / 8 / 8 % 8 % 10, number / 8 % 8 % 10, number % 8 % 10);
  return 0;
}
