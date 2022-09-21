#include <stdio.h>

#define MAX_LAST_NAME_LENGTH 20

int main(int argc, char const *argv[])
{
  char c, first,
      last[MAX_LAST_NAME_LENGTH] = {0};
  int i = 0;

  printf("Enter a first and last name: ");

  scanf(" %c", &first);

  while (getchar() != ' ')
    ;

  while ((c = getchar()) != '\n')
  {
    last[i++] = c;
  }

  printf("You entered the name: ");
  for (i = 0; i < MAX_LAST_NAME_LENGTH; i++)
  {
    putchar(last[i]);
  }
  printf(", %c.\n", first);

  return 0;
}
