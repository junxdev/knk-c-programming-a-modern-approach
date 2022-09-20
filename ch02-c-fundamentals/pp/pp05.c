#include <stdio.h>

int main(void)
{
	int value, result;

	printf("Enter a value: ");
	scanf("%d", &value);

	result = (3 * (value * value * value * value * value)) + (2 * (value * value * value * value)) - (5 * (value * value * value)) - (1 * (value * value)) + (7 * value) - 6;

	printf("This is the result: %d\n", result);
}	
