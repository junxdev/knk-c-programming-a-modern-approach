#include <stdio.h>

int main(void)
{
	int amount, twenty, ten, five, one;

	printf("Enter a dollar amount: ");
	scanf("%d", &amount);

	twenty = amount / 20;
	ten = (amount - (20 * twenty)) / 10;
	five = (amount - ((20 * twenty) + (10 * ten))) / 5;
	one = (amount - ((20 * twenty) + (10 * ten) + (5 * five)));

	printf("\n$20 bills: %d\n", twenty);
	printf("$10 bills: %d\n", ten);
	printf(" $5 bills: %d\n", five);
	printf(" $1 bills: %d\n", one);

	return 0;
}
