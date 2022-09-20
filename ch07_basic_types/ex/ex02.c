#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("(a) %g", 010E2); // legal... wtf? It's not octal...
  printf("(b) %g", 32.1E+5); // legal
  // printf("(c) %g", 0790); // not legal: 9 can't be used in octal
  // printf("(d) %g", 100_000); // not legal: unidentified character _
  printf("(e) %g", 3.978e-2); // legal

  return 0;
}
