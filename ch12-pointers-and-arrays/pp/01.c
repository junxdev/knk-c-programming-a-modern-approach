#include <stdio.h>

#define LEN 100

int main(int argc, char const *argv[])
{
  printf("Enter a message: ");

  char msg[LEN], *p;
  for (p = msg; p < msg + LEN; p++)
  {
    *p = getchar();
    if (*p == '\n')
      break;
  }

  printf("Reversal is: ");
  for (p--; p >= msg; p--)
  {
    putchar(*p);
  }
  printf("\n");

  return 0;
}
