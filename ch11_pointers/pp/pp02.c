#include <stdio.h>

#define HOUR 60
#define MIDDAY 12

void find_closest_flight(int desired_time, int *departure_time, int *arriaval_time);

int main(int argc, char const *argv[])
{
  int hours, minutes, departure_time, arriaval_time;
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  find_closest_flight(hours * HOUR + minutes, &departure_time, &arriaval_time);

  printf("Closest departure time is ");
  printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
         departure_time / HOUR - (departure_time / HOUR > MIDDAY ? MIDDAY : 0),
         departure_time % HOUR,
         (departure_time / HOUR < MIDDAY) ? 'a' : 'p',
         arriaval_time / HOUR - (arriaval_time / HOUR > MIDDAY ? MIDDAY : 0),
         arriaval_time % HOUR,
         (arriaval_time / HOUR < MIDDAY) ? 'a' : 'p');

  return 0;
}

void find_closest_flight(int desired_time, int *departure_time, int *arriaval_time)
{
  int f1, f2, f3, f4, f5, f6, f7, f8;

  f1 = 8 * HOUR + 0;
  f2 = 9 * HOUR + 43;
  f3 = 11 * HOUR + 19;
  f4 = 12 * HOUR + 47;
  f5 = 14 * HOUR + 0;
  f6 = 15 * HOUR + 45;
  f7 = 19 * HOUR + 0;
  f8 = 21 * HOUR + 45;

  if (desired_time < f1 + ((f2 - f1) / 2))
  {
    *departure_time = f1;
    *arriaval_time = 10 * HOUR + 16;
  }
  else if (desired_time < f2 + ((f3 - f2) / 2))
  {
    *departure_time = f2;
    *arriaval_time = 11 * HOUR + 52;
  }
  else if (desired_time < f3 + ((f4 - f3) / 2))
  {
    *departure_time = f3;
    *arriaval_time = 13 * HOUR + 31;
  }
  else if (desired_time < f4 + ((f5 - f4) / 2))
  {
    *departure_time = f4;
    *arriaval_time = 15 * HOUR + 0;
  }
  else if (desired_time < f5 + ((f6 - f5) / 2))
  {
    *departure_time = f5;
    *arriaval_time = 16 * HOUR + 8;
  }
  else if (desired_time < f6 + ((f7 - f6) / 2))
  {
    *departure_time = f6;
    *arriaval_time = 17 * HOUR + 55;
  }
  else if (desired_time < f7 + ((f8 - f7) / 2))
  {
    *departure_time = f7;
    *arriaval_time = 21 * HOUR + 20;
  }
  else
  {
    *departure_time = f8;
    *arriaval_time = 11 * HOUR + 58;
  }
}