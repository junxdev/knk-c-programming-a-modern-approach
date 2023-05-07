#include <stdio.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(int argc, char const *argv[])
{
  char word[20];

  printf("Enter a word: ");
  scanf("%s", word);

  printf("Scrabble value: %d\n", compute_scrabble_value(word));

  return 0;
}

int compute_scrabble_value(const char *word)
{
  int n = 0;

  while (*word)
  {
    switch (toupper(*word++))
    {
    case 'A':
    case 'E':
    case 'I':
    case 'L':
    case 'N':
    case 'O':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
      n += 1;
      break;

    case 'D':
    case 'G':
      n += 2;
      break;

    case 'B':
    case 'C':
    case 'M':
    case 'P':
      n += 3;
      break;

    case 'F':
    case 'H':
    case 'V':
    case 'W':
    case 'Y':
      n += 4;
      break;

    case 'K':
      n += 5;
      break;

    case 'J':
    case 'X':
      n += 8;
      break;

    case 'Q':
    case 'Z':
      n += 10;
      break;
    }
  }

  return n;
}
