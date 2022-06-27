#include <stdio.h>

void pay_amount(int, int *, int *, int *, int *);

int main(int argc, char const *argv[])
{
  int amount, twenties, tens, fives, ones;

  printf("Enter a dollar amount: ");
  scanf("%d", &amount);

  pay_amount(amount, &twenties, &tens, &fives, &ones);

  printf("$20 bills: %d\n", twenties);
  printf("$10 bills: %d\n", tens);
  printf(" $5 bills: %d\n", fives);
  printf(" $1 bills: %d\n", ones);

  return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
  *twenties = dollars / 20;
  *tens = (dollars - (20 * *twenties)) / 10;
  *fives = (dollars - ((20 * *twenties) + (10 * *tens))) / 5;
  *ones = (dollars - ((20 * *twenties) + (10 * *tens) + (5 * *fives)));
}
