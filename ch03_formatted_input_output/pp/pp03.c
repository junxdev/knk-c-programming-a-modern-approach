#include <stdio.h>

int main(int argc, char const *argv[])
{
  int GS1_prefix, group_identifier, publisher_code, item_number, check_digit;

  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &GS1_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);
 
  printf("GS1 Prefix: %d\n", GS1_prefix);
  printf("Group Identifier: %d\n", group_identifier);
  printf("Publisher Code: %d\n", publisher_code);
  printf("Item Number: %d\n", item_number);
  printf("Check Digit: %d\n", check_digit);
  
  return 0;
}
