int b, c;
void f(void)
{
  int b, d;
}
void g(int a)
{
  int c;
  {
    int a, d;
  }
}
int main(void)
{
  int c, d;
}

/*
 * (a) The f function: int b in the f function, int c, int d
 * (b) The g function: int a, int b, int c in the g function
 * (c) The block in which a and d are declared: int a in the block, int b, int c in the g function, int d
 * (d) The main function: int b, int c in the main function, int d
 */