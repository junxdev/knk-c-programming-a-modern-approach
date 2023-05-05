#include <stdio.h>

int read_line_a(char str[], int n);
int read_line_b(char str[], int n);
int read_line_c(char str[], int n);
int read_line_d(char str[], int n);

int read_line_a(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (i == 0 && ch == ' ')
      continue;
    if (i < n)
      str[i++] = ch;
  }

  str[i] = '\0';

  return i;
}

int read_line_b(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != ' ')
  {
    if (i < n)
      str[i++] = ch;
  }

  str[i] = '\0';

  return i;
}

int read_line_c(char str[], int n)
{
  int ch, i = 0;

  do
  {
    ch = getchar();
    if (i < n)
      str[i++] = ch;

  } while (ch != '\n');

  str[i] = '\0';

  return i;
}

int read_line_d(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (i < n)
      str[i++] = ch;
    else
      break;
  }

  str[i] = '\0';

  return i;
}