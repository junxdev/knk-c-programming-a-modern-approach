#include <stdio.h>

#define TAX_RATE 0.05f

int main(void)
{
	float amount, tax_added_amount;

	printf("Enter an amount: ");
	scanf("%f", &amount);

	tax_added_amount = amount * (1 + TAX_RATE);

	printf("With tax added: $%0.2f\n", tax_added_amount);

	return 0;
}
