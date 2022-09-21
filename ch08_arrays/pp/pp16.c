#include <stdio.h>
#include <ctype.h>

#define NUM_ALPHABET 26

int main(int argc, char const *argv[])
{
  int i, letters_seen[NUM_ALPHABET] = {0};
  char ch;

  printf("Enter first word: ");
  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
      letters_seen[tolower(ch) - 'a']++;
  }

  printf("Enter first word: ");
  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
      letters_seen[tolower(ch) - 'a']--;
  }

  for (i = 0; i < NUM_ALPHABET; i++)
  {
    if (letters_seen[i] != 0)
    {
      printf("The words are not anagrams.");
      return 0;
    }
  }
  printf("The words are anagrams.");

  return 0;
}
