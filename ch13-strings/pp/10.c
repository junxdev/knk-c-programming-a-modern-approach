#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverse_name(char *name);
char *skip_space(char *str, char *name);

int main(int argc, char const *argv[])
{
  char name[50];

  printf("Enter a first and last name: ");
  gets(name);

  reverse_name(name);

  printf("%s\n", name);

  return 0;
}

void reverse_name(char *name)
{
  char first[20], last[20], s[50];

  skip_space(last, skip_space(first, name));

  sprintf(name, "%s, %c.", last, toupper(first[0]));
}

char *skip_space(char *str, char *name)
{
  int i = 0;

  while (*name == ' ')
    name++;

  while (*name != ' ' && *name != '\0')
    str[i++] = *name++;
  str[i] = '\0';

  return name;
}
