//  Calculates two fractions

#include <stdio.h>

int main(int argc, char const *argv[])
{
  int num1, denom1, num2, denom2, result_num, result_denom;
  int gcd, n, remainder;
  char op;

  printf("Enter two fractions separated by any sign: ");
  scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);

  switch (op)
  {
  case '+':
    result_num = num1 * denom2 + num2 * denom1;
    result_denom = denom1 * denom2;
    break;

  case '-':
    result_num = num1 * denom2 - num2 * denom1;
    result_denom = denom1 * denom2;
    break;

  case '*':
    result_num = num1 * num2;
    result_denom = denom1 * denom2;
    break;

  case '/':
    result_num = num1 * denom2;
    result_denom = denom1 * num2;
    break;
  }

  gcd = result_num;
  n = result_denom;

  while (n > 0)
  {
    remainder = gcd % n;
    gcd = n;
    n = remainder;
  }

  printf("The result is %d/%d\n", result_num / gcd, result_denom / gcd);

  return 0;
}
