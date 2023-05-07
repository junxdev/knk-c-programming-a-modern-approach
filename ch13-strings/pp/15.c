#include <stdbool.h> /* C99 only */
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

/* stack function prototype */
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);
void stack_overflow(void);
void stack_underflow(void);

/* calculator function prototype */
int calculate(int second_operand, int first_operand, char operator);
void print_result(int result);
int evaluate_RPN_expression(const char *expression);

int main(int argc, char const *argv[])
{
  char c, expression[STACK_SIZE + 1];
  int i = 0;
  for (;;)
  {
    printf("Enter an RPN expression: ");
    while (scanf(" %c", &expression[i]))
    {
      if ((expression[i] >= '0' &&
           expression[i] <= '9') ||
          expression[i] == '+' ||
          expression[i] == '-' ||
          expression[i] == '*' ||
          expression[i] == '/')
        i++;
      else
        break;
    }
    print_result(evaluate_RPN_expression(expression));
  }

  return 0;
}

void make_empty(void)
{
  top = 0;
}

bool is_empty(void)
{
  return top == 0;
}

bool is_full(void)
{
  return top == STACK_SIZE;
}

void push(int i)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}

int pop(void)
{
  if (is_empty())
    stack_underflow();
  else
    return contents[--top];
}

void stack_overflow(void)
{
  printf("Expression is too complex\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  printf("Not enough operands in expression\n");
  exit(EXIT_FAILURE);
}

int calculate(int second_operand, int first_operand, char operator)
{
  switch (operator)
  {
  case '+':
    return first_operand + second_operand;
  case '-':
    return first_operand - second_operand;
  case '*':
    return first_operand * second_operand;
  case '/':
    return first_operand / second_operand;
  }
}

void print_result(int result)
{
  printf("Value of expression: %d\n", result);
}

int evaluate_RPN_expression(const char *expression)
{
  while (*expression)
  {
    switch (*expression)
    {
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
      push(*expression - 48);
      break;
    case '+':
    case '-':
    case '*':
    case '/':
      push(calculate(pop(), pop(), *expression));
      break;
    case '=':
      return pop();
      break;
    default:
      exit(EXIT_SUCCESS);
    }

    if (is_empty())
      break;

    expression++;
  }
}
