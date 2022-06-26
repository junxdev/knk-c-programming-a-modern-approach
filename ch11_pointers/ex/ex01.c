#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i = 3, *p = &i;

  printf("%d\n", *p); // 3
  printf("%p\n", *&p);  // pointer to i
  // printf("%d\n", *i); // need pointer
  printf("%d\n", *&i); // 3
  printf("%p\n", &p); // pointer to p
  printf("%p\n", &*p); // pointer to i
  printf("%p\n", &i); // pointer to i
  // printf("%d\n", &*i); // need pointer

  return 0;
}
