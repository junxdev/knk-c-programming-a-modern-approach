#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i1, i2, i3, i4, t;

  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  if (i1 > i2)
  {
    t = i1;
    i1 = i2;
    i2 = t;
  }
  if (i3 > i4)
  {
    t = i3;
    i3 = i4;
    i4 = t;
  }
  if (i1 > i3)
  {
    t = i1;
    i1 = i3;
    i3 = t;
  }
  if (i2 > i4)
  {
    t = i2;
    i2 = i4;
    i4 = t;
  }

  printf("Largest: %d\n", i4);
  printf("Smallest: %d\n", i1);
  
  return 0;
}
