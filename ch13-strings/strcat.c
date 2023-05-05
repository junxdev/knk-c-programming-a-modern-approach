#include <stdio.h>

char *my_strcat(char *s1, const char *s2)
{
  char *p = s1;
  while (*++p)
    ;
  while (*p++ = *s2++)
    ;
  return s1;
}

int main(int argc, char const *argv[])
{
  char s1[10] = "abc";
  printf("%s\n", my_strcat(s1, "def"));
  return 0;
}
