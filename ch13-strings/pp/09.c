#include <stdio.h>
#include <ctype.h>

int compute_vowel_count(const char *sentence);

int main(int argc, char const *argv[])
{
  char word[20];

  printf("Enter a sentence: ");
  gets(word);

  printf("Your sentence contains %d vowels.\n", compute_vowel_count(word));
  return 0;
}

int compute_vowel_count(const char *sentence)
{
  int vowels = 0;

  while (*sentence)
  {
    switch (toupper(*sentence++))
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
      vowels++;
      break;
    }
  }

  return vowels;
}
