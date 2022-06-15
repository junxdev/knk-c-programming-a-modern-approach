#include <stdio.h>

int main(int argc, char const *argv[])
{
  float x, y;
 
  scanf("%f", &x);
  scanf("%f ", &y); // This will wait for a non-white-space character.

  printf("%f, %f", x, y);
  
  return 0;
}
