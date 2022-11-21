#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(int argc, char const *argv[])
{
  int n;

  printf("This program creates a magic square of a specified size.\n");
  printf("Ths size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");
  scanf("%d", &n);

  int magic_square[n][n];

  create_magic_square(n, magic_square);
  print_magic_square(n, magic_square);

  return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
  int col, row, i;

  for (row = 0; row < n; row++)
  {
    for (col = 0; col < n; col++)
    {
      magic_square[row][col] = 0;
    }
  }

  row = 0, col = n / 2, i = 1;

  magic_square[row][col] = i;
  while (i++ < n * n)
  {
    if (magic_square[row - 1 < 0 ? n - 1 : row - 1][col + 1 < n ? col + 1 : 0] == 0)
    {
      row = row - 1 < 0 ? n - 1 : row - 1;
      col = col + 1 < n ? col + 1 : 0;
    }
    else
    {
      row = row + 1 < n ? row + 1 : 0;
    }
    magic_square[row][col] = i;
  }
}

void print_magic_square(int n, char magic_square[n][n])
{
  int col, row;

  for (row = 0; row < n; row++)
  {
    for (col = 0; col < n; col++)
    {
      printf("%5d", magic_square[row][col]);
    }
    printf("\n");
  }
}
