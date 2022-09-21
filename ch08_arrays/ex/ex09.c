#include <stdio.h>

#define DAYS (int)(sizeof(temperature_readings) / sizeof(temperature_readings[0]))
#define HOURS (int)(sizeof(temperature_readings[0]) / sizeof(temperature_readings[0][0]))

int main(int argc, char const *argv[])
{
  int i, j;
  float temperature_readings[30][24], sum_day, sum_month;

  sum_month = 0.0f;
  for (i = 0; i < DAYS; i++)
  {
    sum_day = 0.0f;
    for (j = 0; j < HOURS; j++)
    {
      sum_day += temperature_readings[i][j];
    }
    sum_month += sum_day;
    printf("the average temperature of the day %d: %.1f\n", i + 1, sum_day / HOURS);
  }

  printf("\n");
  printf("the average temperature of the month: %.1f\n", sum_month / (DAYS * HOURS));

  return 0;
}
