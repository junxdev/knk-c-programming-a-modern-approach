#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;

  i = 077;
  printf("0%o: %d\n", i, i); // 8 * 7 + 1 * 7 = 63

  i = 0x77;
  printf("0x%x: %d\n", i, i); // 16 * 7 + 1 * 7 = 119

  i = 0XABC;
  printf("0x%x: %d\n", i, i); // 16 * 16 * 10 + 16 * 11 + 12 = 2748

  return 0;
}
