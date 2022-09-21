#include <stdio.h>

int main(int argc, char const *argv[])
{
  int size;

  printf("This program creates a magic square of a specified size.\n");
  printf("Ths size must be an odd number between 1 and 99.\n");
  printf("Enter size of magic square: ");

  scanf("%d", &size);
  int square[size][size], col, row, i;

  for (row = 0; row < size; row++)
  {
    for (col = 0; col < size; col++)
    {
      square[row][col] = 0;
    }
  }

  row = 0, col = size / 2, i = 1;

  square[row][col] = i;
  while (i++ < size * size)
  {
    if (square[row - 1 < 0 ? size - 1 : row - 1][col + 1 < size ? col + 1 : 0] == 0)
    {
      row = row - 1 < 0 ? size - 1 : row - 1;
      col = col + 1 < size ? col + 1 : 0;
    }
    else
    {
      row = row + 1 < size ? row + 1 : 0;
    }
    square[row][col] = i;
  }

  for (row = 0; row < size; row++)
  {
    for (col = 0; col < size; col++)
    {
      printf("%5d", square[row][col]);
    }
    printf("\n");
  }

  return 0;
}
