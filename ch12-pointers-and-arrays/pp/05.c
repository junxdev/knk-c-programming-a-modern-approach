#include <stdio.h>

#define MAX_LENGTH 100

int main(int argc, char const *argv[])
{
  char terminating_ch,
      sentence[MAX_LENGTH] = {0},
      *p = sentence,
      *q = sentence + MAX_LENGTH - 1;

  printf("Enter a sentence: ");
  while ((*q = getchar()) != '\n')
  {
    if (*q == '.' || *q == '!' || *q == '?')
      terminating_ch = *q;
    else
      *p++ = *q;
  }

  printf("Reversal of sentence: ");
  while (p > sentence)
  {
    while (*--p != ' ' && p > sentence)
      ;
    q = p == sentence ? p : p + 1;
    while (*q != ' ' && *q != 0)
    {
      putchar(*q++);
    }
    if (p > sentence)
      putchar(' ');
  }
  printf("%c\n", terminating_ch);

  return 0;
}
