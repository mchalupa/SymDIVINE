#define a (2)
#define SIZE 8
int main() { 
  int i, sn=0;
  for(i=1; i<=SIZE; i++) {
    if (i<4)
    sn = sn + a;
  }
  __VERIFIER_assert(sn==SIZE*a || sn == 0);
}

