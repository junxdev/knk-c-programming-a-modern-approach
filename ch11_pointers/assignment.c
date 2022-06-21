#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j, *p, *q;

  p = &i;
  q = p;
  *p = 1;
  printf("%d\n", i); // 1

  *q = 2;
  printf("%d\n", i); // 2
  
  q = &j;
  j = 3;
  *p = *q;
  printf("%d\n", i); // 3
  
  return 0;
}
