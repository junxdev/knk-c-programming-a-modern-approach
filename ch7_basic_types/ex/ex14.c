#include <stdio.h>

int main(int argc, char const *argv[])
{
  float f, frac_part;

  f = 2147483647.5; // int part is much bigger than max(2,147,483,647)

  frac_part = f - (int)f; // fail to convert float to int

  printf("frac_part is %g", frac_part);
  
  return 0;
}
