#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j;
  
  for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
    printf("%d ", i);

  return 0;
}

/*
Output:
5 4 3 2 
*/