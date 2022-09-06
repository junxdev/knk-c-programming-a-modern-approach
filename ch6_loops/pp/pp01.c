#include <stdio.h>

int main(int argc, char const *argv[])
{
  float n, largest = 0;

  while (n > 0)
  {
    printf("Enter a number: ");
    scanf("%f", &n);

    if (n > largest)
    {
      largest = n;
    }
  }

  printf("\nThe largest number entered was %g", largest);

  return 0;
}
