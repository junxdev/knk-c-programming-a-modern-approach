#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char str[3] = "a";

  str[0] = 'a';
  *str = 0;
  printf("(a) %s\n", str);

  str[0] = 'a';
  str[0] = '\0';
  printf("(b) %s\n", str);

  str[0] = 'a';
  strcpy(str, "");
  printf("(c) %s\n", str);

  str[0] = 'a';
  strcat(str, "");
  printf("(d) %s\n", str); // only (d) prints "(d) a"

  return 0;
}
