#include <stdio.h>

#define NUM_FLIGHTS 8
#define LAST_FLIGHT NUM_FLIGHTS - 1
#define HOUR 60
#define MIDDAY 12

int main(int argc, char const *argv[])
{
  int hours, minutes, estimates;
  int departure_times[NUM_FLIGHTS] = {
      8 * HOUR + 0,
      9 * HOUR + 43,
      11 * HOUR + 19,
      12 * HOUR + 47,
      14 * HOUR + 0,
      15 * HOUR + 45,
      19 * HOUR + 0,
      21 * HOUR + 45,
  };
  int arriaval_times[NUM_FLIGHTS] = {
      10 * HOUR + 16,
      11 * HOUR + 52,
      13 * HOUR + 31,
      14 * HOUR + 0,
      16 * HOUR + 8,
      17 * HOUR + 55,
      21 * HOUR + 20,
      23 * HOUR + 58,
  };

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  estimates = hours * HOUR + minutes;

  printf("Closest departure time is ");
  for (int i = 0; i < LAST_FLIGHT; i++)
  {
    if (estimates < departure_times[i] + ((departure_times[i + 1] - departure_times[i]) / 2))
    {
      printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
             departure_times[i] / HOUR - (departure_times[i] / HOUR > MIDDAY ? MIDDAY : 0),
             departure_times[i] % HOUR,
             (departure_times[i] / HOUR < MIDDAY) ? 'a' : 'p',
             arriaval_times[i] / HOUR - (arriaval_times[i] / HOUR > MIDDAY ? MIDDAY : 0),
             arriaval_times[i] % HOUR,
             (arriaval_times[i] / HOUR < MIDDAY) ? 'a' : 'p');
      return 0;
    }
  }

  printf("%d:%.2d %c.m., arriving at %d:%.2d %c.m.\n",
         departure_times[LAST_FLIGHT] / HOUR - (departure_times[LAST_FLIGHT] / HOUR > MIDDAY ? MIDDAY : 0),
         departure_times[LAST_FLIGHT] % HOUR,
         (departure_times[LAST_FLIGHT] / HOUR < MIDDAY) ? 'a' : 'p',
         arriaval_times[LAST_FLIGHT] / HOUR - (arriaval_times[LAST_FLIGHT] / HOUR > MIDDAY ? MIDDAY : 0),
         arriaval_times[LAST_FLIGHT] % HOUR,
         (arriaval_times[LAST_FLIGHT] / HOUR < MIDDAY) ? 'a' : 'p');

  return 0;
}
