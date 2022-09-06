#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = 0;

  while (++i < 5)
  {
    if (i > 3)
      continue;
    printf("%d ", i);
  }

  i = 0;

  while (++i < 5)
  {
    if (i > 3)
      goto loop_end;
    printf("%d ", i);
  loop_end:; // null statement
  }

  return 0;
}
