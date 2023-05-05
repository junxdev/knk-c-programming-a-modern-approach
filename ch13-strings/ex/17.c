#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(int argc, char const *argv[])
{
  printf("%d\n", test_extension("memo.txt", "TXT"));
  return 0;
}

bool test_extension(const char *file_name, const char *extension)
{
  while (*file_name++ != '.')
    ;

  while (toupper(*file_name++) == toupper(*extension++))
    if (*file_name == '\0')
      return 1;
      
  return 0;
}
