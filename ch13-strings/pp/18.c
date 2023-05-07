#include <stdio.h>

int main(int argc, char const *argv[])
{
  char *months[] = {"Jan", "Feb", "Mar",
                    "Apr", "May", "Jun",
                    "Jul", "Aug", "Sep",
                    "Oct", "Nove", "Dec"};
  int month, day, year;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &month, &day, &year);

  printf("You entered the date %s %d, %d\n", months[month - 1], day, year);

  return 0;
}
