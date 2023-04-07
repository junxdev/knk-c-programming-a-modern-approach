#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, (*p)[3], *i;

  for (p = &a[0]; p < &a[3]; p++)
  {
    printf("%d-> %d\n", p, (*p)[0]);
  }
  for (i = &a[0][0]; i < &a[0][3]; i++)
  {
    printf("%d-> %d\n", i, *i);
  }
  printf("%d\n", **a);

  return 0;
}
