#include <stdio.h>

int main(int argc, char const *argv[])
{
  unsigned short int i;

  i = (unsigned short) 65537; // over-maximum value(65,535) at 32-bit or 64-bit CPU

  printf("%d", i);

  return 0;
}
