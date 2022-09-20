#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a = 25, b = 2, c = 7, d = 1, e = 5;

  printf("(a) a * b - c * d + e = %d, ", a * b - c * d + e);
  printf("(((a * b) - (c * d)) + e) = %d\n", (((a * b) - (c * d)) + e));

  printf("(b) a / b %% c / d = %d, ", a / b % c / d);
  printf("(((a / b) %% c) / d) = %d\n", (((a / b) % c) / d));

  printf("(c) - a - b + c - + d = %d, ", - a - b + c - + d);
  printf("((((- a) - b) + c) - (+ d)) = %d\n", ((((- a) - b) + c) - (+ d)));

  printf("(d) a * - b / c - d = %d, ", a * - b / c - d);
  printf("(((a * (- b)) / c) - d) = %d\n", (((a * (- b)) / c) - d));

  return 0;
}
