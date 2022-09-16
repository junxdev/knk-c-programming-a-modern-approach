#include <stdio.h>

int main(int argc, char const *argv[])
{
  char c;

  int i;
  i += c;

  c = 2 * c - 1;

  putchar(c);

  // printf(c); // not legal: needs string instead character

  return 0;
}
