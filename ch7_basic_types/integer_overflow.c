#include <stdio.h>

int main(int argc, char const *argv[])
{
  int i ;
  printf("Enter a number: ");
  scanf("%d", &i);

  short int a = 32767;
  printf("signed int overflow -> %hd\n", a += i); // -32768

  unsigned short int b = 65535;
  printf("unsigned int overflow -> %hu\n", b += i); // 0

  return 0;
}
