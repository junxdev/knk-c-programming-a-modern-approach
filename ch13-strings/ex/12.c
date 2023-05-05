#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(int argc, char const *argv[])
{
  char file_name[20] = "m.tx", extension[18];

  get_extension(file_name, extension);
  printf("extension: %s\n", extension);
  return 0;
}

void get_extension(const char *file_name, char *extension)
{
  int i = strlen(file_name);
  while (*(file_name + i--) != '.')
    ;
  strcpy(extension, &file_name[i + 2]);
}