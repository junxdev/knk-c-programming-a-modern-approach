#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = -0x1b; // -033 or -27

  if (i < 0)
  {
    printf("-0x%x\n", -i);
    printf("-0%o\n", -i);
    printf("%d\n", i);
  }
  else
  {
    printf("0x%x\n", i);
    printf("0%o\n", i);
    printf("%d\n", i);
  }

  return 0;
}
