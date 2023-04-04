#include <stdio.h>

void add_ten(int a);

void main() {

	// call by reference : 林家甫 逞败林绰 规过
	int a = 10;
	add_ten(&a);
	printf("a :%d\n", a);
}

void add_ten(int* a) {
	*a += 10;
}