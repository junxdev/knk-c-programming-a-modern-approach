#include <stdlib.h>
#include <stdio.h>

size_t my_strlen(const char *s)
{
  const char *p = s;
  while (*(s++))
    ;
  return s - p;
}

int main(int argc, char const *argv[])
{
  printf("%d\n", my_strlen("abcde"));
  return 0;
}
