#include <stdio.h>

int main(int argc, char const *argv[])
{
  int m1, d1, y1, m2, d2, y2;
  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);
  printf("Enter a date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  while (m2 != 0 && d2 != 0 && y2 != 0)
  {
    if (y1 > y2)
    {
      y1 = y2, m1 = m2, d1 = d2;
    }
    else if (y2 > y1)
    {
    }
    else if (m1 > m2)
    {
      y1 = y2, m1 = m2, d1 = d2;
    }
    else if (m2 > m1)
    {
    }
    else if (d1 > d2)
    {
      y1 = y2, m1 = m2, d1 = d2;
    }
    else if (d2 > d1)
    {
    }
    else
    {
    }

    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &m2, &d2, &y2);
  }
  printf("%d/%d/%.2d is the earliest date", m1, d1, y1);

  return 0;
}
