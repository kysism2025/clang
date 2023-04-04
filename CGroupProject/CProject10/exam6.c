#include <stdio.h>

int* increase();
int num = 100;

void main() {
	int i;
	int* sp;
	for (i = 0; i < 5; i++) {
		sp = increase();
		printf("sum : %d\n", *sp); // 1,2,3,4,5
	}
}

int* increase() {
	static int sum = 0;
	sum++;
	num = 100;
	// return &sum;
	return &num;
}
