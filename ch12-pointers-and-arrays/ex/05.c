#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[] = {1, 2, 3}, *p;

  p = a;

  printf("(a) p == a[0]: %d\n", p == a[0]);       // 0: p is a pointer and a is int
  printf("(b) p == &a[0]: %d\n", p == &a[0]);     // 1: both are pointers
  printf("(c) *p == a[0]: %d\n", *p == a[0]);     // 1: both are int
  printf("(d) p[0] == a[0]: %d\n", p[0] == a[0]); // 1: both are subscriptions

  return 0;
}
