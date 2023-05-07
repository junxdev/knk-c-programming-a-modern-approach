#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define NUM_ALPHABET 26

bool are_anagrams(const char *word1, const char *word2);

int main(int argc, char const *argv[])
{
  char word1[20], word2[20];
  printf("Enter first word: ");
  scanf("%s", word1);
  printf("Enter second word: ");
  scanf("%s", word2);

  if (are_anagrams(word1, word2))
    printf("The words are anagrams.");
  else
    printf("The words are not anagrams.");
  printf("\n");

  return 0;
}

bool are_anagrams(const char *word1, const char *word2)
{
  int i, letters_seen[NUM_ALPHABET] = {0};

  while (*word1)
  {
    if (isalpha(*word1))
      letters_seen[tolower(*word1) - 'a']++;
    *word1++;
  }

  while (*word2)
  {
    if (isalpha(*word2))
      letters_seen[tolower(*word2) - 'a']--;
    *word2++;
  }

  for (i = 0; i < NUM_ALPHABET; i++)
  {
    if (letters_seen[i] != 0)
      return false;
  }
  return true;
}