#include <stdio.h>
#include <stdbool.h>

double compute_average_word_length(const char *sentence);

int main(int argc, char const *argv[])
{
  char sentence[50];

  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);

  printf("Average word length: %.1f\n", compute_average_word_length(sentence));

  return 0;
}

double compute_average_word_length(const char *sentence)
{
  int length = 0, word = 0;
  bool is_new_word = true;

  while (*sentence != '\n' && *sentence != '\0')
  {
    if (*sentence == ' ')
    {
      if (!is_new_word)
        is_new_word = true;
    }
    else
    {
      if (is_new_word)
      {
        is_new_word = false;
        word++;
      }
      length++;
    }
    sentence++;
  }

  return length / (float)word;
}
