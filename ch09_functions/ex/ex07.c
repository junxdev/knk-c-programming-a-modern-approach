#include <stdio.h>

int f(int a, int b);
int main(int argc, char const *argv[])
{
  int i;
  double x;

  i = f(83, 12);
  printf("%d\n", i);
  
  x = f(83, 12); // return would be promote to double
  printf("%g\n", x);

  i = f(3.15, 9.28); // arguments would be promote to double
  printf("%d\n", i);

  x = f(3.15, 9.28); // arguments and return would be promote to double
  printf("%g\n", x);
  
  f(83, 12);

  return 0;
}

int f(int a, int b)
{
  return 0;
}
