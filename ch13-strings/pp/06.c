/* Checks planet names */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETES 9

int main(int argc, char const *argv[])
{
  char *planets[] = {"mercury", "venus", "earth",
                     "mars", "jupiter", "saturn",
                     "uranus", "neptune", "pluto"},
       input[10];
  int i, j;

  for (i = 1; i < argc; i++)
  {
    strcpy(input, argv[i]);
    for (j = 0; j < 10; j++)
      input[j] = isalpha(input[j]) ? tolower(input[j]) : input[j];

    for (j = 0; j < NUM_PLANETES; j++)
    {
      if (strcmp(input, planets[j]) == 0)
      {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
    if (j == NUM_PLANETES)
    {
      printf("%s is not a planet\n", argv[i]);
    }
  }

  return 0;
}
