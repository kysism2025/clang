#include <stdio.h>

void Test(short* ptr);

void main() {

	short tips = 5;

	printf("tips의 주소확인:%d\n", &tips);
	Test(&tips);
}

void Test(short *ptr) {

	short soft = 0;

	printf("처음 ptr의 값:%d \n", ptr);
	printf("ptr의 가르키는 곳:%d\n", *ptr);

	soft = *ptr;
	*ptr = 3;

	printf("최종 soft의 값:%d", *ptr);
}