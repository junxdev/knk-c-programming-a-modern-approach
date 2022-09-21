#include <stdio.h>

#define FIB_SIZE ((int)(sizeof(fib_numbers) / sizeof(fib_numbers[0])))

int main(int argc, char const *argv[])
{
  int fib_numbers[40] = {0, 1};

  for (int i = 2; i < FIB_SIZE; i++)
  {
    fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];
  }

  for (int i = 0; i < FIB_SIZE; i++)
  {
    printf("%d: %d\n", i + 1, fib_numbers[i]);
  }

  return 0;
}
