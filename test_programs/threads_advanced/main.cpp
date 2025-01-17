#include <pthread.h>

int __VERIFIER_nondet_int();

volatile int glob = 0;
volatile int glob2 = 0;

void* f1(void*) {
	while(glob < 42) {}
	glob = 120;
	return 0;
}

void* f2(void*) {
	while(glob != 120) {
		int in = __VERIFIER_nondet_int();
		if(in < 12)
			glob += in;
	}
	return 0;
}

void* f3(void*) {
	while(glob != 120) {
		glob2 = __VERIFIER_nondet_int();
	}
	return 0;
}

int main() {
	pthread_t t1, t2, t3;

	pthread_create(&t1, NULL, f1, 0);
	pthread_create(&t2, NULL, f2, 0);
	pthread_create(&t3, NULL, f3, 0);

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);
	pthread_join(t3, NULL);
}