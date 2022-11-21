#include <stdio.h>

void selection_sort(int a[], int n);

int main(int argc, char const *argv[])
{
  int n;

  printf("How many numbers will you sort? ");
  scanf("%d", &n);

  int a[n];
  for (int i = 0; i < n; i++)
  {
    printf("Enter the number %d: ", i + 1);
    scanf("%d", &a[i]);
  }

  selection_sort(a, n);

  printf("Sorted numbers:");
  for (int i = 0; i < n; i++)
  {
    printf(" %d", a[i]);
  }
  printf("\n");

  return 0;
}

void selection_sort(int a[], int n)
{
  if (n < 2)
    return;

  int largest_index = 0, temp;
  for (int i = 1; i < n; i++)
  {
    if (a[i] > a[largest_index])
    {
      largest_index = i;
    }
  }

  temp = a[n - 1];
  a[n - 1] = a[largest_index];
  a[largest_index] = temp;

  selection_sort(a, n - 1);
}
