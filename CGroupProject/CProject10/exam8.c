#include <stdio.h>

void exchange();
int a, b; // ����

void main() {

	printf("������ �� ���� �Է��ϼ��� :");
	scanf_s("%d%d", &a, &b);
	printf("a: %d, b: %d\n", a, b);
	exchange();
	printf("a: %d, b: %d\n", a, b);
}

void exchange() {
	int temp;
	temp = a;
	a = b;
	b = temp;
}