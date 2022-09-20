#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;
  char command;

  printf("Enter an integer: ");
  scanf("%d", &i);
  printf("Enter a command: ");
  command = getchar();
  printf("i: %d, command: %c", i, command);

  char c1, c2;

  printf("Enter a character: ");
  c1 = getchar();
  printf("Enter a character: ");
  c2 = getchar();
  printf("c1: %c, c2: %c", c1, c2);

  int i1, i2;
  printf("Enter an integer: ");
  scanf("%d", &i1);
  printf("Enter an integer: ");
  scanf("%d", &i2);
  printf("i1: %d, i2: %d", i1, i2);

  return 0;
}
