#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LEN 100

bool is_palindrome(const char *message);

int main(int argc, char const *argv[])
{

  char c, msg[LEN];
  int i = 0;

  printf("Enter a message: ");
  while ((c = getchar()) != '\n' && i < LEN)
    msg[i++] = c;
  msg[i] = '\0';

  printf(is_palindrome(msg) ? "Palindrome\n" : "Not a palindrome\n");

  return 0;
}

bool is_palindrome(const char *message)
{
  char *end = message + strlen(message) - 1;

  while (end != message)
    if (*end-- != *message++)
      return false;
  return true;
}