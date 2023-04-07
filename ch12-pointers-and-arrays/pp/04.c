#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define LEN 100

int main(int argc, char const *argv[])
{
  char msg[LEN], *p, *q;
  bool is_palindrome = true;

  printf("Enter a message: ");
  for (p = msg + LEN - 1, q = msg; q < msg + LEN;)
  {
    *p = getchar();
    if (*p == '\n')
      break;
    if (isalpha(*p))
      *q++ = tolower(*p);
  }

  p = msg;
  q--;

  while (p != q)
  {
    if (*p++ != *q--)
    {
      is_palindrome = false;
      break;
    }
  }

  printf(is_palindrome ? "Palindrome" : "Not a palindrome");

  return 0;
}
