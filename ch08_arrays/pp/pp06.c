#include <stdio.h>
#include <ctype.h>

#define MAX_SIZE 100

int main(int argc, char const *argv[])
{
  char ch, message[MAX_SIZE] = {0};
  int i, len;

  printf("Enter message: ");
  while ((ch = getchar()) != '\n')
  {
    message[len++] = ch;
  }

  printf("In B1FF-speak: ");
  for (i = 0; i < MAX_SIZE; i++)
  {
    switch (ch = toupper(message[i]))
    {
    case 'A':
      putchar('4');
      break;
    case 'B':
      putchar('8');
      break;
    case 'E':
      putchar('3');
      break;
    case 'I':
      putchar('1');
      break;
    case 'O':
      putchar('0');
      break;
    case 'S':
      putchar('5');
      break;
    default:
      putchar(ch);
      break;
    }
  }
  printf("!!!!!!!!!!\n");

  return 0;
}
