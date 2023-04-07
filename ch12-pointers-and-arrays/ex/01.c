#include <stdio.h>

int main(int argc, char const *argv[])
{
  int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
  int *p = &a[1], *q = &a[5];

  printf("(a) What is the value of *(p + 3)? %d\n", *(p + 3));         // 14
  printf("(b) What is the value of *(q - 3)? %d\n", *(q - 3));         // 34
  printf("(c) What is the value of q - p? %d\n", q - p);               // 4
  printf("(d) Is the condition p < q true or false? %d\n", p < q);     // true(1)
  printf("(d) Is the condition *p < *q true or false? %d\n", *p < *q); // false(0)

  return 0;
}
