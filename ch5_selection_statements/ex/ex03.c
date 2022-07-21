#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, j, k;

  i = 3, j = 4, k = 5;
  printf("(a) %d ", i < j || ++j < k);
  printf("%d %d %d\n", i, j, k); // 1, 3, 4, 5 => i < j is true so that the latter is not evaluated

  i = 7, j = 8, k = 9;
  printf("(b) %d ", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k); // 0, 7, 8, 9 => i - 7 is false so that the latter is not evaluated 

  i = 7, j = 8, k = 9;
  printf("(c) %d ", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k); // 1, 8, 8, 9 => i = j returns 8(true) so that the latter is not evaluated

  i = 1, j = 1, k = 1;
  printf("(d) %d ", ++i || ++j && ++k);
  printf("%d %d %d\n", i, j, k); // 1, 2, 1, 1 => && has higher precedence than || and ++i is true so that the latter is not evaluated

  return 0;
}
