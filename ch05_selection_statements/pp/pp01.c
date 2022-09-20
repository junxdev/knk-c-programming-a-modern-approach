#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number, digits;

  printf("Enter a number: ");
  scanf("%d", &number);

  if (number < 10) digits = 1;
  else if (number < 100) digits = 2;
  else digits = 3;

  printf("The number %d has %d digits\n", number, digits);
  
  return 0;
}
