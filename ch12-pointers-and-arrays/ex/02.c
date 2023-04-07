#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int *high, *low, *middle;

  low = &a[1];
  high = &a[4];

  // Pointers can't be added.
  // middle = (low + high) / 2;

  // Get a gap and add it to a pointer.
  middle = low + ((high - low) / 2);

  printf("%d\n", a);
  printf("%d\n", *middle);

  return 0;
}
