int main() {
  float f = 1;
  int i = f;
  if (i == 1){
    goto ERROR;
  }
  return (0);
ERROR: assert( 0 );
  return (-1);
}

