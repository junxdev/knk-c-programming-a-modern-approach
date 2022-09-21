#include <stdio.h>
#include <ctype.h>

#define NUM_ALPHABET 26

int main(int argc, char const *argv[])
{
  char c;
  int score = 0,
      letters[NUM_ALPHABET] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8,
                               5, 1, 3, 1, 1, 3, 10, 1, 1, 1,
                               1, 4, 4, 8, 4, 10};

  printf("Enter a word: ");

  while ((c = toupper(getchar())) != '\n')
  {
    score += letters[c - 'A'];
  }

  printf("Scrabble value: %d\n", score);

  return 0;
}
