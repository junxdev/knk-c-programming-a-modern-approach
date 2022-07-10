#include <stdio.h>

int main(int argc, char const *argv[])
{
  /* in C99 */
  printf("(a) %d\n", 8 / 5);   /* 1 */
  printf("(b) %d\n", -8 / 5);  /* -1 */
  printf("(c) %d\n", 8 / -5);  /* -1 */
  printf("(d) %d\n", -8 / -5); /* 1 */
  
  return 0;
}
