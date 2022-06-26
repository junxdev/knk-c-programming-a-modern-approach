#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(int argc, char const *argv[])
{
  int day_of_year = 364, year = 2022, month, day;

  split_date(day_of_year, year, &month, &day);

  printf("%d.%d.%d\n", year, month, day);

  return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
  int acc = 0, days_of_months[] = {31,
                                   28,
                                   31,
                                   30,
                                   31,
                                   30,
                                   31,
                                   31,
                                   30,
                                   31,
                                   30,
                                   31};

  if (year % 4 == 0)
    days_of_months[1] = 29;

  for (int i = 0; i < 12; i++)
  {
    if (day_of_year <= acc + days_of_months[i])
    {
      *month = i + 1;
      *day = day_of_year - acc;
      break;
    }
    acc += days_of_months[i];
  }
}
