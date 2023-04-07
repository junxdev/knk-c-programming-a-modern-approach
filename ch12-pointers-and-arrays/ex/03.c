#include <stdio.h>
#define N 10

int main(int argc, char const *argv[])
{
  int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int *p = &a[0], *q = &a[N - 1], temp;

  // The loop reverse the array "a".
  while (p < q)
  {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
  }

  for (p = a; p < a + N; p++)
  {
    printf("%d ", *p);
  }
  printf("\n");

  return 0;
}
