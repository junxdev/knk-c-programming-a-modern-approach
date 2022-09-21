#include <stdio.h>

#define STUDENTS (int)(sizeof(score_table) / sizeof(score_table[0]))
#define QUIZZES (int)(sizeof(score_table[0]) / sizeof(score_table[0][0]))

int main(int argc, char const *argv[])
{
  int student, quiz, sum, high, low, score_table[5][5];

  for (student = 0; student < STUDENTS; student++)
  {
    printf("Enter the scores of student %d: ", student);
    for (quiz = 0; quiz < QUIZZES; quiz++)
    {
      scanf(" %d", &score_table[student][quiz]);
    }
  }

  for (student = 0; student < STUDENTS; student++)
  {
    sum = 0;
    for (quiz = 0; quiz < QUIZZES; quiz++)
    {
      sum += score_table[student][quiz];
    }
    printf("Student %d's total: %d, average: %3.2f\n", student + 1, sum, sum / (float)QUIZZES);
  }

  for (quiz = 0; quiz < QUIZZES; quiz++)
  {
    sum = 0, high = 0, low = 100;
    for (student = 0; student < STUDENTS; student++)
    {
      sum += score_table[student][quiz];
      if (score_table[student][quiz] > high)
        high = score_table[student][quiz];
      if (score_table[student][quiz] < low)
        low = score_table[student][quiz];
    }
    printf("Quiz %d's average: %3.2f, high: %d, low: %d\n", quiz + 1, sum / (float)STUDENTS, high, low);
  }

  return 0;
}
