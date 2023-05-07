#include <stdio.h>

int main(int argc, char const *argv[])
{
  char *tens[] = {"", "", "twenty",
                  "thirty", "fourty", "fifty",
                  "sixty", "seventy", "eighty",
                  "ninety"},
       *ones[] = {"", "-one", "-two",
                  "-three", "-four", "-five",
                  "-six", "-seven", "-eight",
                  "-nine"},
       *teens[] = {"ten", "eleven", "twelve",
                   "thirteen", "fourteen", "fifteen",
                   "sixteen", "seventeen", "eighteen",
                   "nineteen"};
  int ten, one;

  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &ten, &one);

  printf("You entered the number: ");
  if (ten == 1)
    printf("%s", teens[one]);
  else
    printf("%s%s", tens[ten], ones[one]);
  printf("\n");

  return 0;
}
