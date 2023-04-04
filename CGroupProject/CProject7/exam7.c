#include <stdio.h>


void assign(int* cheoli);

void main() {

	int cheoli = 0;
	assign(&cheoli);
	printf("함수가 호출된 후에 cheoli에 저장된 값:%d\n", cheoli);

}

/*
void assign() {
	cheoli = 100;
}
*/

void assign(int *cheoli) {
	*cheoli = 100;
}