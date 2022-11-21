#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int roll_dice(void);
bool play_game(void);

int main(int argc, char const *argv[])
{
  int wins = 0, losses = 0;
  char play;

  srand((unsigned)time(NULL));

  do
  {
    if (play_game())
    {
      wins++;
      printf("You win!\n\n");
    }
    else
    {
      losses++;
      printf("You lose!\n\n");
    }

    do
    {
      printf("Play again? ");
      play = getchar();
      while (getchar() != '\n')
        ;
    } while (play != 'y' && play != 'n');
    
    printf("\n");
  } while (play == 'y');

  printf("Wins: %d\tLosses: %d\n", wins, losses);
  return 0;
}

int roll_dice(void)
{
  return rand() % 6 + rand() % 6 + 2;
}
bool play_game(void)
{
  int point, roll;

  point = roll_dice();
  printf("You rolled: %d\n", point);

  switch (point)
  {
  case 7:
  case 11:
    return true;
  case 2:
  case 3:
  case 12:
    return false;
  }

  printf("Your point is %d\n", point);

  while ((roll = roll_dice()) != 7)
  {
    printf("You rolled: %d\n", roll);
    if (roll == point)
      return true;
  }

  return false;
}
