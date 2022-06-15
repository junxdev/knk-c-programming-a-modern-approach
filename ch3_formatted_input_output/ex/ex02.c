#include <stdio.h>

int main(int argc, char const *argv[])
{
  float x = 123.45678;

  printf("(a) |%-8.1e|\n", x);
  printf("(b) |%10.6e|\n", x);
  printf("(c) |%-8.3f|\n", x);
  printf("(d) |%6.0f|\n", x);
  
  return 0;
}
