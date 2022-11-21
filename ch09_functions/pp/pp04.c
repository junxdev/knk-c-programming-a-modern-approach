#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void read_word(int counts[26]);
bool equal_array(int count1[26], int count2[26]);

int main(int argc, char const *argv[])
{
  int count1[26] = {0}, count2[26] = {0};

  read_word(count1);
  read_word(count2);

  if (equal_array(count1, count2))
    printf("The words are anagrams.");
  else
    printf("The words are not anagrams.");

  return 0;
}

void read_word(int counts[26])
{
  char ch;

  printf("Enter the word: ");
  while ((ch = getchar()) != '\n')
  {
    if (isalpha(ch))
      counts[tolower(ch) - 'a']++;
  }
}
bool equal_array(int count1[26], int count2[26])
{
  int i;

  for (i = 0; i < 26; i++)
  {
    if (count1[i] != count2[i])
    {
      return false;
    }
  }
  return true;
}
