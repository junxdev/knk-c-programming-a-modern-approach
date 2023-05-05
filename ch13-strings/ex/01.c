#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("(a)"); printf("%c", '\n'); // (o)
  // printf("(b)"); printf("%c", "\n"); // (x) string on character type
  // printf("(c)"); printf("%s", '\n'); // (x) character on string type
  printf("(d)"); printf("%s", "\n"); // (o)
  // printf("(e)"); printf('\n'); // (x) character on string type
  printf("(f)"); printf("\n"); // (o)
  printf("(g)"); putchar('\n'); // (o)
  // printf("(h)"); putchar("\n"); // (x) string on character type
  // printf("(i)"); puts('\n'); // (x) character on string type
  // printf("(j)"); puts("\n"); // (x) right type but it gives two new lines
  printf("(k)"); puts(""); // (o)
  return 0;
}
