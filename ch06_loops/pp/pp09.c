// Calculates the remaining balance on a loan
// input: 20100, 6, 386.66

#include <stdio.h>

#define YEAR 12

int main(void)
{
	float loan, rate, payment, n_payments, monthly_rate;

	printf("Enter amount of loan: ");
	scanf("%f", &loan);

	printf("Enter interest rate: ");
	scanf("%f", &rate);

	printf("Enter monthly payment: ");
	scanf("%f", &payment);

	printf("Enter number of payments: ");
	scanf("%f", &n_payments);

	monthly_rate = 1 + ((rate / YEAR) / 100);

	for (int i = 1; i <= n_payments; i++)
	{
		loan = (loan - payment) * monthly_rate;
		printf("Balance remaining after payment %d: $%0.2f\n", i, loan);
	}

	return 0;
}
