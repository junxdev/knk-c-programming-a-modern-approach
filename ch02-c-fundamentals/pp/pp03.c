/* Computes the volume of a sphere */

#include <stdio.h>

#define PI 3.14159f

int main(void)
{
	int radius;
	float volume;

	printf("Sphere's radius: ");
	scanf("%d", &radius);
	
	volume = (4.0f / 3.0f) * PI * (radius * radius * radius);
	
	printf("Sphere's volume: %.2f\n", volume);

	return 0;
}
