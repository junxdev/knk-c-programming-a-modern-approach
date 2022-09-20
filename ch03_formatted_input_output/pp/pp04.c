#include <stdio.h>

int main(int argc, char const *argv[])
{
  int location, first, second;
  
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &location, &first, &second);

  printf("You entered %d.%d.%d", location, first, second);

  return 0;
}
