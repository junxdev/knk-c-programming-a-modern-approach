#include <stdio.h>

int main(int argc, char const *argv[])
{
  char *p = "abc";

  // (a)
  // putchar(p); // wrong type
  // (b)
  putchar(*p); // right type and it will print a
  // (c)
  puts(p); // right type and it will print abc
  // (d)
  // puts(*p); // wrong type

  return 0;
}
