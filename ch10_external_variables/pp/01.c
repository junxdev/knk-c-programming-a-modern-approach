#include <stdbool.h> /* C99 only */
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;
bool is_nested = true;

void make_empty(void);
void push(char c);
bool is_empty(void);
bool is_full(void);
char pop(void);
void stack_overflow(void);
void stack_underflow(void);

int main(int argc, char const *argv[])
{
  char c;

  printf("Enter parentheses and/or braces: ");

  while ((c = getchar()) != '\n')
  {
    if (c == '(' || c == '{')
    {
      push(c);
    }
    else if (c == ')' && pop() != '(')
    {
      is_nested = false;
    }
    else if (c == '}' && pop() != '{')
    {
      is_nested = false;
    }
  }

  if (is_empty() && is_nested)
    printf("Parentheses/braces are nested properly\n");
  else
    printf("Parentheses/braces are not nested properly\n");

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

void push(char c)
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = c;
}

char pop(void)
{
  if (is_empty())
    stack_underflow();
  else
    return contents[--top];
}

void stack_overflow(void)
{
  printf("Error: Stack overflow\n");
  exit(EXIT_FAILURE);
}

void stack_underflow(void)
{
  is_nested = false;
}