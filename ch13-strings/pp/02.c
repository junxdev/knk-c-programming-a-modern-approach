/* Prints a one-month reminder list */

#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

int main(int argc, char const *argv[])
{
  char reminders[MAX_REMIND][MSG_LEN + 3];
  char time_str[12], msg_str[MSG_LEN + 1];
  int month, day, hour, minute, i, j, num_remind = 0;

  for (;;)
  {
    if (num_remind == MAX_REMIND)
    {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter time and reminder: ");
    scanf("%2d", &month);
    if (month == 0)
      break;
    scanf("/%2d %2d:%2d", &day, &hour, &minute);
    sprintf(time_str, "%2d/%2d %2d:%2d", month, day, hour, minute);
    read_line(msg_str, MSG_LEN);

    if (day < 0 || day > 31)
    {
      printf("Invalid day number\n");
      continue;
    }

    for (i = 0; i < num_remind; i++)
      if (strcmp(time_str, reminders[i]) < 0)
        break;
    for (j = num_remind; j > i; j--)
      strcpy(reminders[j], reminders[j - 1]);

    strcpy(reminders[i], time_str);
    strcat(reminders[i], msg_str);

    num_remind++;
  }

  printf("\nDay Reminder\n");
  for (i = 0; i < num_remind; i++)
    printf(" %s\n", reminders[i]);

  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while ((ch = getchar()) != '\n')
  {
    if (i < n)
      str[i++] = ch;
  }
  str[i] = '\0';
  return i;
}