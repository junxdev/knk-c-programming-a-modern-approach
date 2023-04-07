/* Reverses a series of numbers (pointer version) */

#include <stdio.h>

#define N 10

int main(int argc, char const *argv[])
{
  int a[N], *p;

  printf("Enter %d numbers: ", N);
  for (p = a; p < a + N; p++)
    scanf("%d", p); // use p to point to an array element, not &p

  printf("In reverse order:");
  for (p = a + N - 1; p >= a; p--)
    printf(" %d", *p);
  printf("\n");

  return 0;
}
