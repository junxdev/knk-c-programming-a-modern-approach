#include <stdio.h>

int main(void)
{
	int value, result;

	printf("Enter a value: ");
	scanf("%d", &value);

	result = ((((3 * value + 2) * value - 5) * value - 1) * value + 7) * value - 6;

	printf("This is the result: %d\n", result);
}
