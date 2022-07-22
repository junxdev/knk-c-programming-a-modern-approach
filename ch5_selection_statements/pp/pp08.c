#include <stdio.h>

int main(int argc, char const *argv[])
{
  int hours, minutes, estimates, f1, f2, f3, f4, f5, f6, f7, f8;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  estimates = hours * 60 + minutes;

  f1 = 8 * 60 + 0;
  f2 = 9 * 60 + 43;
  f3 = 11 * 60 + 19;
  f4 = 12 * 60 + 47;
  f5 = 14 * 60 + 0;
  f6 = 15 * 60 + 45;
  f7 = 19 * 60 + 0;
  f8 = 21 * 60 + 45;

  printf("Closest departure time is ");
  if (estimates < f1 + ((f2 - f1) / 2))
  {
    printf("8:00 a.m., arriving at 10:16 a.m.\n");
  }
  else if (estimates < f2 + ((f3 - f2) / 2))
  {
    printf("9:43 a.m., arriving at 11:52 a.m.\n");
  }
  else if (estimates < f3 + ((f4 - f3) / 2))
  {
    printf("11:19 a.m., arriving at 1:31 p.m.\n");
  }
  else if (estimates < f4 + ((f5 - f4) / 2))
  {
    printf("12:47 p.m., arriving at 3:00 p.m.\n");
  }
  else if (estimates < f5 + ((f6 - f5) / 2))
  {
    printf("2:00 p.m., arriving at 4:08 p.m.\n");
  }
  else if (estimates < f6 + ((f7 - f6) / 2))
  {
    printf("3:45 p.m., arriving at 5:55 p.m.\n");
  }
  else if (estimates < f7 + ((f8 - f7) / 2))
  {
    printf("7:00 p.m., arriving at 9:20 p.m.\n");
  }
  else
  {
    printf("9:45 p.m., arriving at 11:58 p.m.\n");
  }

  return 0;
}
