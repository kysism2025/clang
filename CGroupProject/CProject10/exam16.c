#include <stdio.h>

void main() {

	int ary1[5] = { 1,2,3,4,5 };
	int* ary2;
	ary2 = ary1;

	for (int i = 0; i < 5; i++) {
		printf("%d\n", ary2[i]);
	}
}