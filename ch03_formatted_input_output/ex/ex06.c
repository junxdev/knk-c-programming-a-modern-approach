//  Adds two fractions 

#include <stdio.h>

// Allows the user to enter fractions that contain spaces before and after each / character
int main(int argc, char const *argv[])
{
  int num1, denom1, num2, denom2, result_num, result_denom;

  printf("Enter first fraction: ");
  scanf("%d / %d", &num1, &denom1);
  
  printf("Enter second fraction: ");
  scanf("%d / %d", &num2, &denom2);

  result_num = num1 * denom2 + num2 * denom1;
  result_denom = denom1 * denom2;

  printf("The sum is %d/%d\n", result_num, result_denom);

  return 0;
}