#include <stdio.h>

#define MAX_LENGTH 21

int main(int argc, char const *argv[])
{
  char ch,
      terminating_ch,
      words[30][MAX_LENGTH];
  int i = 0, j = 0;

  printf("Enter a sentence: ");

  while ((ch = getchar()) != '\n')
  {
    if (ch == ' ')
    {
      words[i][j] = '\0';
      if (j > 0)
        i++;
      j = 0;
    }
    else if (ch == '.')
      terminating_ch = ch;
    else
      words[i][j++] = ch;
  }

  printf("Reversal of sentence: ");
  for (; i >= 0; i--)
  {
    printf("%s", words[i]);
    if (i > 0)
      printf(" ");
    else
      printf("%c\n", terminating_ch);
  }

  return 0;
}
