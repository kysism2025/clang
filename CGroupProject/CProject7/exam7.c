#include <stdio.h>


void assign(int* cheoli);

void main() {

	int cheoli = 0;
	assign(&cheoli);
	printf("�Լ��� ȣ��� �Ŀ� cheoli�� ����� ��:%d\n", cheoli);

}

/*
void assign() {
	cheoli = 100;
}
*/

void assign(int *cheoli) {
	*cheoli = 100;
}