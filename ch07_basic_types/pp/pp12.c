#include <stdio.h>

int main(int argc, char const *argv[])
{
  float result, f;
  char op;

  printf("Enter an expression: ");
  scanf("%f", &f);
  result = f;

  while ((op = getchar()) != '\n')
  {
    scanf("%f", &f);

    switch (op)
    {
    case '+':
      result += f;
      break;
    case '-':
      result -= f;
      break;
    case '*':
      result *= f;
      break;
    case '/':
      result /= f;
      break;
    }
  }

  printf("Value of expression: %f\n", result);

  return 0;
}
