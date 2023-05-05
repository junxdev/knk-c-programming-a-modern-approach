#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
  char str[20];

  strcpy(str, "tire-bouchon");
  strcpy(&str[4], "d-or-wi");
  strcat(str, "red?");

  printf("%s\n", str); // It will print "tried-or-wired?" when it has enough length.

  return 0;
}
