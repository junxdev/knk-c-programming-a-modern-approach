#include <stdio.h>
#include <string.h>

#define WORD_LENGTH 20

int main(int argc, char const *argv[])
{
  char word[WORD_LENGTH + 1],
      smallest_word[WORD_LENGTH + 1],
      largest_word[WORD_LENGTH + 1];

  printf("Enter word: ");
  scanf("%s", word);
  strcpy(smallest_word, word);
  strcpy(largest_word, word);

  do
  {
    printf("Enter word: ");
    scanf("%s", word);

    if (strcmp(smallest_word, word) > 0)
      strcpy(smallest_word, word);
    if (strcmp(word, largest_word) > 0)
      strcpy(largest_word, word);
  } while (strlen(word) != 4);

  printf("Smallest word: %s\n", smallest_word);
  printf("Largest word: %s\n", largest_word);

  return 0;
}
