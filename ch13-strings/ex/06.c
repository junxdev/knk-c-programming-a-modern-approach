#include <stdio.h>

void censor(char s[]);

int main(int argc, char const *argv[])
{
  char s[] = "food fool";
  censor(s);
  printf("%s\n", s);
  return 0;
}

void censor(char s[])
{
  int i;

  for (i = 0; s[i] != 0; i++)
  {
    if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'o')
    {
      s[i] = 'x';
      s[i + 1] = 'x';
      s[i + 2] = 'x';
    }
  }
}