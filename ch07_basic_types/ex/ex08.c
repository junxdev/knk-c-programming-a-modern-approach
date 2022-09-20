#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("(a) \\b : %d = \\0x%x : %d\n", '\b', 0x8, 0x8);
  printf("(b) \\n : %d = \\0x%x : %d\n", '\n', 0xC, 0xC);
  printf("(c) \\r : %d = \\0x%x : %d\n", '\r', 0xF, 0xF);
  printf("(d) \\t : %d = \\0x%x : %d\n", '\t', 0xB, 0xB);

  return 0;
}
