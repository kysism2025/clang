#include <stdio.h>

void Test(short* ptr);

void main() {

	short tips = 5;

	printf("tips�� �ּ�Ȯ��:%d\n", &tips);
	Test(&tips);
}

void Test(short *ptr) {

	short soft = 0;

	printf("ó�� ptr�� ��:%d \n", ptr);
	printf("ptr�� ����Ű�� ��:%d\n", *ptr);

	soft = *ptr;
	*ptr = 3;

	printf("���� soft�� ��:%d", *ptr);
}