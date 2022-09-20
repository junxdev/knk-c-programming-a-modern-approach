#include <stdio.h>

typedef char Int8;
typedef short Int16;
typedef int Int32;

int main(int argc, char const *argv[])
{
  Int8 int8 = (Int8)128;
  Int16 int16 = (Int16)32768;
  Int32 int32 = (Int32)2147483648;

  printf("8-bit int %d\n", int8);   // -128
  printf("16-bit int %d\n", int16); // -32768
  printf("32-bit int %d\n", int32); // -2147483648

  return 0;
}
