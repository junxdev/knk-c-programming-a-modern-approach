#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  bool weekend[7] = {true, false, false, false, false, false, true};

  for (int i = 0; i < 7; i++)
  {
    printf("%d: %d\n", i, weekend[i]);
  }

  return 0;
}
