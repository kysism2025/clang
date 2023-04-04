#include <stdio.h>

void main() {
	char c1 = 'A';
	char c2 = 'B';

	printf("% zX\n", &c1);
	printf("% zX\n", &c1 + 1);  // %X : 16진수를 대문자로 표시
	printf("% zx\n", &c1 + 2);  // %x   16진수를 소문자로 표시

	printf("%c\n", *&c1);
	printf("%c\n", *&c1 + 1);  //
	printf("%c\n", *&c1 + 2);  //
}