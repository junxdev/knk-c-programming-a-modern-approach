#include <stdio.h>

int largest(int a[], int n);
double average(int a[], int n);
int count_positive_elements(int a[], int n);

int main(int argc, char const *argv[])
{
  int a[5] = {8, 3, -3, 2, 0};
  int n = 5;

  printf("The largest = %d\n", largest(a, n));
  printf("The average = %g\n", average(a, n));
  printf("The number of positive elements = %d\n", count_positive_elements(a, n));

  return 0;
}

int largest(int a[], int n)
{
  int largest = a[0];
  for (int i = 1; i < n; i++)
  {
    if (a[i] > largest)
    {
      largest = a[i];
    }
  }
  return largest;
}
double average(int a[], int n)
{
  double sum = 0;
  for (int i = 0; i < n; i++)
  {
    sum += a[i];
  }
  return sum / n;
}
int count_positive_elements(int a[], int n)
{
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    if (a[i] > 0)
    {
      count++;
    }
  }
  return count;
}
