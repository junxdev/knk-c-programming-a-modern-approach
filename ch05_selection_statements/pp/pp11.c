#include <stdio.h>

int main(int argc, char const *argv[])
{
  int number, ten, one;
  printf("Enter a two-digit number: ");
  scanf("%1d%1d", &ten, &one);

  printf("You entered the number ");
  switch (ten)
  {
  case 1:
    break;
  case 2:
    printf("twenty-");
    break;
  case 3:
    printf("thirty-");
    break;
  case 4:
    printf("fourty-");
    break;
  case 5:
    printf("fifty-");
    break;
  case 6:
    printf("sixty-");
    break;
  case 7:
    printf("seventy-");
    break;
  case 8:
    printf("eighty-");
    break;
  case 9:
    printf("ninety-");
    break;
  }
  switch (one)
  {
  case 1:
    if (ten == 1)
      printf("eleven.\n");
    else
      printf("one.\n");
    break;
  case 2:
    if (ten == 1)
      printf("twelve.\n");
    else
      printf("two.\n");
    break;
  case 3:
    if (ten == 1)
      printf("thirteen.\n");
    else
      printf("three.\n");
    break;
  case 4:
    if (ten == 1)
      printf("fourteen.\n");
    else
      printf("four.\n");
    break;
  case 5:
    if (ten == 1)
      printf("fifteen.\n");
    else
      printf("five.\n");
    break;
  case 6:
    if (ten == 1)
      printf("sixteen.\n");
    else
      printf("six.\n");
    break;
  case 7:
    if (ten == 1)
      printf("seventeen.\n");
    else
      printf("seven.\n");
    break;
  case 8:
    if (ten == 1)
      printf("eighteen.\n");
    else
      printf("eight.\n");
    break;
  case 9:
    if (ten == 1)
      printf("nineteen.\n");
    else
      printf("nine.\n");
    break;
  }

  return 0;
}
