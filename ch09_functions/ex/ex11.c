#include <stdio.h>
#include <ctype.h>

float compute_GPA(char grades[], int n);

int main(int argc, char const *argv[])
{
  char grade[] = {'A', 'B', 'F', 'F', 'D', 'D', 'C'};
  int n = 7;

  printf("GPA: %.3g\n", compute_GPA(grade, n));

  return 0;
}

float compute_GPA(char grades[], int n)
{
  float avg = 0;
  for (int i = 0; i < n; i++)
  {
    switch (toupper(grades[i]))
    {
    case 'A':
      avg += 4;
      break;
    case 'B':
      avg += 3;
      break;
    case 'C':
      avg += 2;
      break;
    case 'D':
      avg += 1;
      break;
    case 'F':
      avg += 0;
      break;
    }
  }
  return avg / n;
}