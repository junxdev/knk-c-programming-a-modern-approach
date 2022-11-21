#include <stdbool.h>

bool has_zero(int a[], int n)
{
  int i;

  for (i = 0; i < n; i++)
  {
    if (a[i] == 0)
      return true;
    // if a[] is {1, 0} the else statement below will activate, it is right to return true though.
    // else
    //   return false;
  }
  return false;
}