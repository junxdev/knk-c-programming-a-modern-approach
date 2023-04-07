#include <stdio.h>

#define N 10

void fill_ident(double *ident, int n, int dim);

int main(int argc, char const *argv[])
{
  double ident[N][N];

  fill_ident(ident[0], N, 2);

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      printf("%g ", ident[i][j]);
    }
    printf("\n");
  }

  return 0;
}

void fill_ident(double *ident, int n, int dim)
{
  double *p;
  int count = n, total = 1;

  for (int i = 0; i < dim; i++)
  {
    total *= n;
  }

  for (p = ident; p < ident + total; p++)
  {
    if (count == n)
    {
      *p = 1;
      count = 0;
    }
    else
    {
      *p = 0;
      count++;
    }
  }
}
