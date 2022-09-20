#include <stdio.h>

int main(int argc, char const *argv[])
{
  int length, word;
  char c;

  length = 0, word = 0;

  printf("Enter a sentence: ");

  while ((c = getchar()) != '\n')
  {
    if (c == ' ')
    {
      word++;
    }
    else
    {
      length++;
    }
  }

  word++;

  printf("Average word length: %.1f\n", length / (float)word);
  
  return 0;
}

// // ignore any space between words
// int main(int argc, char const *argv[])
// {
//   int length, word;
//   char c;

//   length = 0, word = 0;

//   printf("Enter a sentence: ");

//   // consume space before the sentence
//   scanf(" %c", &c);

//   while (c != '\n')
//   {

//     // count letters til a space or a new line shows
//     while (c != ' ' && c != '\n')
//     {
//       length++;
//       c = getchar();
//     }

//     word++;

//     // stop when it ends with a new line
//     if (c == '\n')
//       break;

//     // consume space before a word
//     while ((c = getchar()) == ' ')
//       ;
//   }

//   printf("Average word length: %.1f\n", length / (float)word);

//   return 0;
// }
