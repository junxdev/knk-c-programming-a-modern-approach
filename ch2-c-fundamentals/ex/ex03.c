#include <stdio.h>

int main(void)
{
	int height = 8, weight = 12, length = 10;
	int volume = height * weight * length;

	printf("Dimensions: %dx%dx%d\n", height, weight, length);
	printf("Volume: %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}
