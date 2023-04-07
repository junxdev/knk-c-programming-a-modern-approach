#include <stdio.h>
#include <stdbool.h> /* C99 only */
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int *top_ptr = contents;

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

void make_empty(void)
{
  top_ptr = contents;
}

bool is_empty(void)
{
  return top_ptr == contents;
}

bool is_full(void)
{
  return top_ptr == contents + STACK_SIZE;
}

void push(int i)
{
  if (is_full())
    stack_overflow();
  else
    *++top_ptr = i;
}

int pop(void)
{
  if (is_empty())
    stack_underflow();
  else
    return *top_ptr--;
}

int main(int argc, char const *argv[])
{
  printf("Is it empty? %d\n", is_empty()); // 1
  push(0);
  push(1);
  push(2);

  printf("Is it full? %d\n", is_full());   // 0
  printf("Is it empty? %d\n", is_empty()); // 0

  printf("It popped %d\n", pop());         // 2
  printf("It popped %d\n", pop());         // 1
  printf("It popped %d\n", pop());         // 0

  printf("Is it empty? %d\n", is_empty()); // 1
  return 0;
}
