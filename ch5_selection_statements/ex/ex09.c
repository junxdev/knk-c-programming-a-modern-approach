#include <stdio.h>

int main(int argc, char const *argv[])
{
  int score = 75;

  if (score >= 90)
    printf("A\n");
  else if (score >= 80)
    printf("B\n");
  else if (score >= 70)
    printf("C\n");
  else if (score >= 60)
    printf("D\n");
  else
    printf("F\n");
    

  if (score < 60)
    printf("F\n");
  else if (score < 70)
    printf("D\n");
  else if (score < 80)
    printf("C\n");
  else if (score < 90)
    printf("B\n");
  else
    printf("A\n");

  return 0;
}
