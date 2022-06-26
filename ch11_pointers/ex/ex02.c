#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i, *p, *q;

  // p = i;
  // *p = &i;
  // &p = q;
  // p = &q;
  p = *&q; // legal
  p = q; // legal
  // p = *q;
  // *p = q;
  *p = *q; // legal

  return 0;
}
