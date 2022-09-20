#include <stdio.h>

int main(int argc, char const *argv[])
{
  int hours, hours12, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  hours12 = hours % 12 == 0 ? 12 : hours % 12;

  printf("Equivalent 12-hour time: ");
  if (hours < 12)
  {
    printf(" %d:%d AM\n", hours12, minutes);
  }
  else
  {
    printf(" %d:%d PM\n", hours12, minutes);
  }

  printf("Equivalent 12-hour time: ");
  if (hours == 0)
  {
    printf("12:%.2d AM\n", minutes);
  }
  else if (hours < 12)
  {
    printf("%d:%.2d AM\n", hours, minutes);
  }
  else if (hours == 12)
  {
    printf("12:%.2d PM\n", minutes);
  }
  else
  {
    printf("%d:%.2d PM\n", hours - 12, minutes);
  }
  return 0;
}
