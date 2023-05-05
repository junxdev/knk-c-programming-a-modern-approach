#include <stdio.h>

int strcmp(char *s, char *t);

int main(int argc, char const *argv[])
{
  printf("a vs b: %d\n", strcmp("a", "b"));
  printf("a vs a: %d\n", strcmp("a", "a"));
  printf("b vs a: %d\n", strcmp("b", "a"));
  printf("a vs : %d\n", strcmp("a", ""));
  return 0;
}
int strcmp(char *s, char *t)
{
  while (*s == *t)
  {
    if (*s == '\0')
      return 0;
    s++;
    t++;
  }

  return *s - *t;
}
