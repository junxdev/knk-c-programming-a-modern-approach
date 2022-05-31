// Calculates the remaining balance on a loan
// input: 20100, 6, 386.66

#include <stdio.h>

#define YEAR 12

int main(void)
{
	float loan, rate, payment, monthly_rate;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	monthly_rate = 1 + ((rate / YEAR) / 100);

	printf("\nBalance remaining after first payment: $%0.2f\n", loan - payment);
	printf("Balance remaining after second payment: $%0.2f\n", ((loan - payment) * monthly_rate) - payment);
	printf("Balance remaining after third payment: $%0.2f\n", ((((loan - payment) * monthly_rate) - payment) * monthly_rate) - payment);

	return 0;
}
