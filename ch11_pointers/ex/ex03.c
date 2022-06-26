#include <stdio.h>

void avg_sum(double a[], int n, double *avg, double *sum)
{
  int i;

  *sum = 0.0;
  for (i = 0; i < n; i++)
    *sum += a[i];
  *avg = *sum / n;
}

int main(int argc, char const *argv[])
{
  int n = 5;
  double a[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  double avg, sum;

  avg_sum(a, n, &avg, &sum);

  printf("avg: %g, sum: %g", avg, sum);

  return 0;
}
