#define ROWS (int)(sizeof(checker_board) / sizeof(checker_board[0]))
#define COLS (int)(sizeof(checker_board) / sizeof(checker_board[0]))

int main(int argc, char const *argv[])
{
  int i, j;
  char checker_board[8][8];

  for (i = 0; i < STUDENTS; i++)
  {
    for (j = 0; j < QUIZSS; j++)
    {
      checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
    }
  }

  return 0;
}
