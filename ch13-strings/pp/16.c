#include <stdio.h>
#include <string.h>

#define LEN 100

void reverse(char *message);
int main(int argc, char const *argv[])
{
  printf("Enter a message: ");

  char c, msg[LEN];
  int i = 0;

  while ((c = getchar()) != '\n' && i < LEN)
    msg[i++] = c;
  msg[i] = '\0';

  reverse(msg);
  printf("Reversal is: %s\n", msg);

  return 0;
}

void reverse(char *message)
{
  char temp, *end = message + strlen(message) - 1;

  while (end != message)
  {
    temp = *end;
    *end = *message;
    *message = temp;
    end--;
    message++;
  }
}