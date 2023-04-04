#include <stdio.h>

void exchange();
int a, b; // 공용

void main() {

	printf("정수값 두 개를 입력하세요 :");
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