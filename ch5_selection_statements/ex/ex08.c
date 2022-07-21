#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
  int age;
  bool teenager;

  age = 10;
  teenager = age < 13 || age > 19 ? false : true;

  return 0;
}
