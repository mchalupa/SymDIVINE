#include <pthread.h>

volatile int i=1, j=1;

#define NUM 5

void *
t1(void* arg)
{
  int k = 0;

  for (k = 0; k < NUM; k++)
    i+=j;
}

void *
t2(void* arg)
{
  int k = 0;

  for (k = 0; k < NUM; k++)
    j+=i;
}

int
main(int argc, char **argv)
{
  pthread_t id1, id2;

  pthread_create(&id1, NULL, t1, NULL);
  pthread_create(&id2, NULL, t2, NULL);

  if (i > 144 || j > 144) {
    assert( 0 );
  }

  return 0;
}
