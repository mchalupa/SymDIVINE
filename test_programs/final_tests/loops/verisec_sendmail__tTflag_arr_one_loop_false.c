int main (void)
{
  char in[11]; // = "3277192070";
  for ( int i = 0; i < 11; ++i )
      in[ i ] = input();
  char *s;
  unsigned char c;
  int i, j;
  int idx_in;
  in[10] = 0;
  idx_in = 0;
  s = in;
  i = 0;
  c = in[idx_in];
  while (('0' <= c) && (c <= '9'))
  {
    j = c - '0';
    i = i * 10 + j;
    idx_in++;
    c = in[idx_in];
  }
  /* BAD */
  __VERIFIER_assert (i >= 0);
  return 0;
}

