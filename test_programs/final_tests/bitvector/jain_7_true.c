extern int __VERIFIER_nondet_int(void);
void main()
{
  int x,y,z;

  x=0;
  y=0;
  z=0;

  while(1)
    {
      x = x +1048576*__VERIFIER_nondet_int();
      y = y +2097152*__VERIFIER_nondet_int();
      z = z +4194304*__VERIFIER_nondet_int();

      __VERIFIER_assert(4*x-2*y+z!=1048576);
    }
}

