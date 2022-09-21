#include <stdio.h>

#define DIGIT_SIZE ((int)(sizeof(digit_count) / sizeof(digit_count[0])))

int main(int argc, char const *argv[])
{
  int digit_count[10];
  char ch;

  for (int i = 0; i < DIGIT_SIZE; i++)
  {
    ch = '0' + i;
    digit_count[ch - '0'] = i;
  }

  for (int i = 0; i < DIGIT_SIZE; i++)
  {
    ch = '0' + i;
    printf("(%c): %d\n", ch, digit_count[ch - '0']);
  }

  return 0;
}
