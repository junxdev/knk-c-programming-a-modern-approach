#include <stdbool.h>
#include <stdio.h>

#define IS_LEAP_YEAR % 4 == 0

int day_of_year(int month, int day, int year);

int main(int argc, char const *argv[])
{
    int month, day, year;

    printf("Enter the date(MM-DD-YYYY): ");
    scanf("%d-%d-%d", &month, &day, &year);

    printf("%d\n", day_of_year(month, day, year));

    return 0;
}

int day_of_year(int month, int day, int year)
{
    int result = day;
    int months[12] = {31, year IS_LEAP_YEAR ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    for (int i = 0; i < month - 1; i++)
    {
        result += months[i];
    }

    return result;
}
