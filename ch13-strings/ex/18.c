#include <stdio.h>

void remove_filename(char *url);

int main(int argc, char const *argv[])
{
  char url[30] = "http://www.knking.com/index.html";
  remove_filename(url);
  printf("%s\n", url);
  return 0;
}

void remove_filename(char *url)
{
  do
  {
    if (*url == '/' && *(url - 1) != '/' && *(url + 1) != '/')
    {
      *url = '\0';
      return;
    }
  } while (*url++);
}