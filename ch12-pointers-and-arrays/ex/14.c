#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key);

int main(int argc, char const *argv[])
{
  int temperatures[7][24] = {[3][15] = 32}, query = 32;

  printf("Did the temperature hit %d degrees last week? %d\n", query, search(*temperatures, 7 * 24, query)); // 1

  query = 26;
  printf("Did the temperature hit %d degrees last week? %d\n", query, search(*temperatures, 7 * 24, query)); // 0

  return 0;
}

bool search(const int a[], int n, int key)
{
  const int *p;

  for (p = a; p < a + n; p++)
  {
    if (*p == key)
      return true;
  }
  return false;
}