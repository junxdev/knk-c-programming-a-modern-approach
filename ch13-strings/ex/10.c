#include <stdio.h>
#include <string.h>

char *duplicate(const char *p);

int main(int argc, char const *argv[])
{
  char s[4] = "str";
  printf("%s\n", duplicate(s));
  return 0;
}

char *duplicate(const char *p)
{
  char *q; // It's not initialized so copying to unknown memory location might be dangerous.

  strcpy(q, p);
  return q;
}
