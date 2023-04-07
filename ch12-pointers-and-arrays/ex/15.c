#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  int temperatures[7][24] = {[3][15] = 32}, *p, i = 3;

  for (p = temperatures[i]; p < temperatures[i + 1]; p++)
    printf("%d ", *p);
    
  printf("\n");

  return 0;
}
