#include <stdio.h>

int say_first(const int a[3])
{
  int b[3] = {10, 11, 12};
  a = b;
  printf("%d\n", a[0]);
}

int main(int argc, char const *argv[])
{
  int a[3] = {1, 2, 3};

  say_first(a);
  printf("%d\n", *a);
  printf("%d\n", a);
  printf("%d\n", &a);
  printf("%d\n", &a[0]);
  // say_first(&(a[0]));

  return 0;
}
