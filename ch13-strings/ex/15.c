int f(char *s, char *t)
{
  char *p1, *p2;

  for (p1 = s; *p1; p1++)
  {
    for (p2 = t; *p2; p2++)
      if (*p1 == *p2)
        break;
    if (*p2 == '\0')
      break;
  }
  return p1 - s;
}

int main(int argc, char const *argv[])
{
  printf("(a): %d\n", f("abcd", "babc")); // Breaks at d -> 3
  printf("(b): %d\n", f("abcd", "bcd"));  // Breaks at a -> 0
  // (c) the position of character not included in t
  return 0;
}
