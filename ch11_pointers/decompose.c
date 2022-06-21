#include <stdio.h>

void decompose(double x, long *int_part, double *frac_part)
{
  *int_part = (long)x;
  *frac_part = x - *int_part;
}

int main(int argc, char const *argv[])
{
  long i;
  double j;

  decompose(3.14159, &i, &j);

  printf("%ld, %g\n", i, j); // 3, 0.141590

  // int a, b;
  // decompose(3.14159, a, b); // error

  printf("%ld, %g\n", i, j); // 3, 0.141590

  return 0;
}
