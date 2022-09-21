#include <stdio.h>

#define ROWS (int)(sizeof(table) / sizeof(table[0]))
#define COLS (int)(sizeof(table[0]) / sizeof(table[0][0]))

int main(int argc, char const *argv[])
{
  int row, col, sum, table[5][5];

  for (row = 0; row < ROWS; row++)
  {
    printf("Enter row %d: ", row);
    for (col = 0; col < COLS; col++)
    {
      scanf(" %d", &table[row][col]);
    }
  }

  printf("Row totals:");
  for (row = 0; row < ROWS; row++)
  {
    sum = 0;
    for (col = 0; col < COLS; col++)
    {
      sum += table[row][col];
    }
    printf(" %d", sum);
  }
  printf("\n");

  printf("Column totals:");
  for (col = 0; col < COLS; col++)
  {
    sum = 0;
    for (row = 0; row < ROWS; row++)
    {
      sum += table[row][col];
    }
    printf(" %d", sum);
  }
  printf("\n");

  return 0;
}
