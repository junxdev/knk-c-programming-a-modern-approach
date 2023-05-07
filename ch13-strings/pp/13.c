#include <stdio.h>

#define MAX_MESSAGE_LENGTH 80

void encrypt(char *message, int shift);

int main(int argc, char const *argv[])
{
  char ch,
      message[MAX_MESSAGE_LENGTH + 1];
  int shift;

  printf("Enter message to be encrypted: ");
  fgets(message, MAX_MESSAGE_LENGTH, stdin);

  printf("Enter shift amount (1-25): ");
  scanf("%d", &shift);

  encrypt(message, shift);

  printf("Encrypted message: %s", message);
  return 0;
}

void encrypt(char *message, int shift)
{
  while (*message != '\n' && *message != '\0')
  {
    if (*message >= 'a' && *message <= 'z')
      *message = ((*message - 'a' + shift) % 26) + 'a';
    else if (*message >= 'A' && *message <= 'Z')
      *message = ((*message - 'A' + shift) % 26) + 'A';
    message++;
  }
}