#include <stdio.h>
#include <ctype.h>

char *capitalize_a(char *s, int n);
char *capitalize_b(char *s, int n);
void capitalize(char s[]);

int main(int argc, char const *argv[])
{
  char s[10] = " a d 3 8c";
  printf("%s\n", capitalize_a(s, 10));
  printf("%s\n", capitalize_b(s, 10));
  capitalize(s);
  printf("%s\n", s);
  return 0;
}

char *capitalize_a(char *s, int n)
{
  char capitalized[n + 1];
  int i;

  for (i = 0; i <= n; i++)
  {
    capitalized[i] = islower(s[i]) ? toupper(s[i]) : s[i];
  }

  return capitalized;
}

char *capitalize_b(char *s, int n)
{
  char capitalized[n + 1];
  int i = 0;

  do
  {
    capitalized[i++] = islower(*s) ? toupper(*s) : *s;
  } while (*s++);

  return capitalized;
}

void capitalize(char s[])
{
  do
  {
    if (islower(*s))
      *s = toupper(*s);
  } while (*++s);
}
