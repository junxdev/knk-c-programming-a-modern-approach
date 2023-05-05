#include <stdio.h>
#include <string.h>

void build_index_url(const char *domain, char *index_url);

int main(int argc, char const *argv[])
{
  char *domain = "knking.com", index_url[50];

  build_index_url(domain, index_url);
  printf("%s\n", index_url);
  return 0;
}

void build_index_url(const char *domain, char *index_url)
{
  strcat(strcat(strcpy(index_url, "http://www."), domain), "/index.html");
}
