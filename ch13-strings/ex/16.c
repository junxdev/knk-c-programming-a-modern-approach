#include <stdio.h>

int count_spaces(const char *s)
{
  int count = 0;

  while (*s++ != '\n')
    if (*s == ' ')
      count++;

  return count;
}
int main(int argc, char const *argv[])
{
  char *s = "1 2 3 4 5";
  printf("%d\n", count_spaces(s));
  return 0;
}
