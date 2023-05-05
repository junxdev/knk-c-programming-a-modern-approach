/* Checks planet names */

#include <stdio.h>
#include <string.h>

#define NUM_PLANETES 9

int main(int argc, char const *argv[])
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  int i, j;

  for (i = 1; i < argc; i++)
  {
    for (j = 0; j < NUM_PLANETES; j++)
    {
      if (strcmp(argv[i], planets[j]) == 0)
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
