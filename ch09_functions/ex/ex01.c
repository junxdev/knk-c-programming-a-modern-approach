#include <stdio.h>

double triangle_area(double base, double height);

int main(int argc, char const *argv[])
{
  double a = 3, b = 4;
  printf("%g", triangle_area(a, b));
  return 0;
}

double triangle_area(double base, double height)
{
  double product;
  product = base * height;
  return product / 2;
}