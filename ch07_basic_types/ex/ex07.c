#include <stdio.h>

int main(int argc, char const *argv[])
{
  printf("(a) \\b : %d = \\0%o : %d\n", '\b', 010, 010);
  printf("(b) \\n : %d = \\0%o : %d\n", '\n', 012, 012);
  printf("(c) \\r : %d = \\0%o : %d\n", '\r', 015, 015);
  printf("(d) \\t : %d = \\0%o : %d\n", '\t', 011, 011);

  return 0;
}
