#include <stdio.h>

#define MAX_MESSAGE_LENGTH 80

int main(int argc, char const *argv[])
{
  char ch,
      message[MAX_MESSAGE_LENGTH] = {0};
  int i = 0, shift;

  printf("Enter message to be encrypted: ");
  while ((ch = getchar()) != '\n' && i < MAX_MESSAGE_LENGTH)
  {
    message[i++] = ch;
  }

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  i = 0;
  printf("Encrypted message: ");
  while (message[i] != 0)
  {
    ch = message[i++];

    if (ch >= 'a' && ch <= 'z')
      ch = ((ch - 'a' + shift) % 26) + 'a';
    else if (ch >= 'A' && ch <= 'Z')
      ch = ((ch - 'A' + shift) % 26) + 'A';

    putchar(ch);
  }

  return 0;
}
