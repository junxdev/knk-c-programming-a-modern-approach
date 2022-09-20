#include <stdio.h>

int main(int argc, char const *argv[])
{
  char first, last;

  printf("Enter a first and last name: ");

  scanf(" %c", &first);

  while (getchar() != ' ')
    ;

  scanf(" %c", &last);
  
  do
  {
    putchar(last);

  } while ((last = getchar()) != '\n' && last != ' ');

  printf(", %c.\n", first);

  return 0;
}
