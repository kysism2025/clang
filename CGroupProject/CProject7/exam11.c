#include <stdio.h>

void main() {
	char c1 = 'A';
	char c2 = 'B';

	printf("% zX\n", &c1);
	printf("% zX\n", &c1 + 1);  // %X : 16������ �빮�ڷ� ǥ��
	printf("% zx\n", &c1 + 2);  // %x   16������ �ҹ��ڷ� ǥ��

	printf("%c\n", *&c1);
	printf("%c\n", *&c1 + 1);  //
	printf("%c\n", *&c1 + 2);  //
}