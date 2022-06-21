#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, *p;

  p = &i;
  scanf("enter number: %d", p); // ok: value(pointer) of pointer variable
  printf("%d\n", i);

  // scanf("%d", &p); // error: pointer to pointer variable
  // printf("%d\n", i);
  return 0;
}
