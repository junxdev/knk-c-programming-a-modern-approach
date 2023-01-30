#include <stdio.h>

#define MAX_DIGITS 10
#define ROWS 4
#define COLUMNS MAX_DIGITS * 4
#define SEGMENT_BLOCKS 7

const int segments[MAX_DIGITS][SEGMENT_BLOCKS] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1},
};

const int segment_positions[SEGMENT_BLOCKS][2] = {
    {0, 1},
    {1, 2},
    {2, 2},
    {2, 1},
    {2, 0},
    {1, 0},
    {1, 1},
};

/* external variables */
char digits[ROWS][COLUMNS];
int row, column;

/* function prototype */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(int argc, char const *argv[])
{
  char ch;
  int digit_read = 0;

  clear_digits_array();
  printf("Enter a number: ");
  while ((ch = getchar()) != '\n')
  {
    if (ch < '0' || ch > '9')
      continue;
    if (digit_read > MAX_DIGITS - 1)
      break;
    process_digit(ch - 48, digit_read);
    digit_read++;
  }
  print_digits_array();
  return 0;
}

void clear_digits_array(void)
{

  for (row = 0; row < ROWS; row++)
  {
    for (column = 0; column < COLUMNS; column++)
    {
      digits[row][column] = ' ';
    }
  }
}

void process_digit(int digit, int position)
{
  int block;

  for (block = 0; block < SEGMENT_BLOCKS; block++)
  {
    if (segments[digit][block])
    {
      row = segment_positions[block][0];
      column = segment_positions[block][1];

      digits[row][column + position * 4] = column % 2 ? '_' : '|';
    }
  }
}

void print_digits_array(void)
{
  for (row = 0; row < ROWS; row++)
  {
    for (column = 0; column < COLUMNS; column++)
    {
      putchar(digits[row][column]);
    }
    putchar('\n');
  }
}