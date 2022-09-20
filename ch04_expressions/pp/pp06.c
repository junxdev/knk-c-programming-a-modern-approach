#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a, b, c, d, e, f, g, h, i, j, k, l, first_sum, second_sum, total;

  printf("Enter the first 11 digits of a UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l);

  first_sum = b + d + f + h + j + l;
  second_sum = a + c + e + g + i + k;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));

  return 0;
}
