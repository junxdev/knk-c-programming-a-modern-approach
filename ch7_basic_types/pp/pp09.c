#include <stdio.h>

int main(int argc, char const *argv[])
{
  int h, m;
  char time;

  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &h, &m, &time);

  printf("Equivalent 24-hour time: ");
  switch (toupper(time))
  {
  case 'A':
    printf("%d:%d\n", h, m);
    break;

  case 'P':
    printf("%d:%d\n", h + 12, m);
    break;
  }

  return 0;
}
