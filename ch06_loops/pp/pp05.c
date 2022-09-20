#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number;

  printf("Enter a number: ");
  scanf("%d", &number);

  printf("The reversal is: ");
  do
  {
    printf("%d", number % 10);
    number /= 10;
  } while (number > 0);

  return 0;
}
