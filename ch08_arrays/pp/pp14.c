#include <stdio.h>

#define MAX_LENGTH 100

int main(int argc, char const *argv[])
{
  char ch,
      terminating_ch,
      sentence[MAX_LENGTH] = {0};
  int i, j, n = 0;

  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n')
  {
    if (ch == '.' || ch == '!' || ch == '?')
      terminating_ch = ch;
    else
      sentence[n++] = ch;
  }

  printf("Reversal of sentence: ");
  // for (i = n; i >= 0; i--)
  // {
  //   if (sentence[i] == ' ')
  //   {
  //     for (j = i + 1; j < n; j++)
  //     {
  //       putchar(sentence[j]);
  //     }
  //     putchar(' ');
  //     n = i;
  //   }
  // }

  // // first word
  // for (j = i + 1; j < n; j++)
  // {
  //   putchar(sentence[j]);
  // }

  while (n > 0)
  {
    while (sentence[--n] != ' ' && n > 0)
      ;
    i = (n == 0 ? 0 : n + 1);
    while (sentence[i] != ' ' && sentence[i] != 0)
    {
      putchar(sentence[i++]);
    }
    if (n > 0)
      putchar(' ');
  }

  printf("%c\n", terminating_ch);

  return 0;
}
