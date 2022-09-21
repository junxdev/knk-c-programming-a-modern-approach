#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define MAP_SIZE 10
#define MAP_MIN 0
#define MAP_MAX MAP_SIZE - 1
#define NUM_DIRECTIONS 4
#define ALL_DIRECTIONS_BLOCKED directions_blocked[0] && directions_blocked[1] && directions_blocked[2] && directions_blocked[3]
#define UP 0
#define RIGHT 1
#define DOWN 2
#define LEFT 3
#define STEP 1

int main(int argc, char const *argv[])
{
  char marker = 'A';
  char map[MAP_SIZE][MAP_SIZE] = {
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
      {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
  };
  int direction, row = MAP_MIN, col = MAP_MIN;
  bool directions_blocked[NUM_DIRECTIONS] = {false};

  srand((unsigned)time(NULL));

  map[row][col] = marker++;

  while (marker <= 'Z')
  {
    for (direction = 0; direction < NUM_DIRECTIONS; direction++)
    {
      directions_blocked[direction] = false;
    }

    if (row - 1 < MAP_MIN || map[row - 1][col] != '.')
      directions_blocked[UP] = true;
    if (col + 1 > MAP_MAX || map[row][col + 1] != '.')
      directions_blocked[RIGHT] = true;
    if (row + 1 > MAP_MAX || map[row + 1][col] != '.')
      directions_blocked[DOWN] = true;
    if (col - 1 < MAP_MIN || map[row][col - 1] != '.')
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

      map[row][col] = marker++;

      break;
    }
  }

  for (row = 0; row < MAP_SIZE; row++)
  {
    for (col = 0; col < MAP_SIZE; col++)
    {
      printf("%c ", map[row][col]);
    }
    printf("\n");
  }

  return 0;
}
