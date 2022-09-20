#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("|%6d,%4d|\n", 86, 1040); // ____86,1040
  printf("|%12.5e|\n", 30.253); // _3.02530e+01
  printf("|%.4f|\n", 83.162); // 83.1620
  printf("|%-6.2g|\n", .0000009979); // 1e-06_

  return 0;
}
