#include <stdio.h>

void split_time(long, int *, int *, int *);

int main(int argc, char const *argv[])
{
  long total_sec = 35041;
  int hr, min, sec;

  split_time(total_sec, &hr, &min, &sec);

  printf("%ldseconds = %d:%d:%d\n", total_sec, hr, min, sec);

  return 0;
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
  int min_by_sec = 60, hr_by_sec = 60 * min_by_sec;
  *hr = total_sec / (hr_by_sec);
  *min = (total_sec - (*hr * hr_by_sec)) / min_by_sec;
  *sec = total_sec - (*hr * hr_by_sec + *min * min_by_sec);
}
