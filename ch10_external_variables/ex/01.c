int a;
void f(int b)
{
  int c;
}
void g(void)
{
  int d;
  {
    int e;
  }
}
int main(void)
{
  int f;
}

/*
 * (a) The f function: int a, int b, int c
 * (b) The g function: int a, int d
 * (c) The block in which e is declared: int a, int d, int e
 * (d) The main function: int a, int f
 */