/* Determines the length of a message */

#include <stdio.h>

int main(int argc, char const *argv[])
{
  char ch;
  int len = 0;

  printf("Enter a message: ");
  while ((ch = getchar()) != '\n')
    len++;
  printf("Your message was %d character(s) long.\n", len);

  return 0;
}
