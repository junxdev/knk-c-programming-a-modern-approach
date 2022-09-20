#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i;

  i = 1; // onetwo
  switch (i % 3)
  {
  case 0:
    printf("zero");
  case 1:
    printf("one");
  case 2:
    printf("two");
  }
  printf("\n");
  return 0;
}
