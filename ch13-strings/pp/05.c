#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  int i, total = 0;

  for (i = 1; i < argc; i++)
  {
    total += atoi(argv[i]);
  }
  printf("Total: %d\n", total);

  return 0;
}
