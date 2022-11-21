#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define NUM_DIRECTIONS 4
#define ALL_DIRECTIONS_BLOCKED directions_blocked[0] && directions_blocked[1] && directions_blocked[2] && directions_blocked[3]
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3
#define STEP 1

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(int argc, char const *argv[])
{
  char walk[10][10];

  generate_random_walk(walk);
  print_array(walk);

  return 0;
}

void generate_random_walk(char walk[10][10])
{
  char marker = 'A';
  int direction, row, col;
  bool directions_blocked[NUM_DIRECTIONS] = {false};

  for (row = 0; row < 10; row++)
  {
    for (col = 0; col < 10; col++)
    {
      walk[row][col] = '.';
    }
  }

  srand((unsigned)time(NULL));

  row = rand() % 10, col = rand() % 10;

  walk[row][col] = marker++;

  while (marker <= 'Z')
  {
    for (direction = 0; direction < NUM_DIRECTIONS; direction++)
    {
      directions_blocked[direction] = false;
    }

    if (row - 1 < 0 || walk[row - 1][col] != '.')
      directions_blocked[UP] = true;
    if (col + 1 >= 10 || walk[row][col + 1] != '.')
      directions_blocked[RIGHT] = true;
    if (row + 1 >= 10 || walk[row + 1][col] != '.')
      directions_blocked[DOWN] = true;
    if (col - 1 < 0 || walk[row][col - 1] != '.')
      directions_blocked[LEFT] = true;

    if (ALL_DIRECTIONS_BLOCKED)
      break;

    while (true)
    {
      direction = rand() % NUM_DIRECTIONS;

      if (directions_blocked[direction])
        continue;

      switch (direction)
      {
      case UP:
        row -= 1;
        break;
      case RIGHT:
        col += 1;
        break;
      case DOWN:
        row += 1;
        break;
      case LEFT:
        col -= 1;
        break;
      }

      walk[row][col] = marker++;

      break;
    }
  }
}

void print_array(char walk[10][10])
{
  int row, col;

  for (row = 0; row < 10; row++)
  {
    for (col = 0; col < 10; col++)
    {
      printf("%c ", walk[row][col]);
    }
    printf("\n");
  }
}