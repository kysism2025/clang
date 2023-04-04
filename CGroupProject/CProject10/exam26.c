#include <stdio.h>

typedef int INT;
typedef int* PTR_INT;
typedef unsigned int UNIT;
typedef unsigned int* PTR_UNIT;
typedef unsigned char UCHAR;
typedef unsigned char* PTR_UCHAR;

void main() {

	INT num1 = 120;
	PTR_INT pnum1 = &num1;

	UNIT num2 = 190;
	PTR_UNIT pnum2 = &num2;

	UCHAR ch = 'a';
	PTR_UCHAR pch = &ch;

	printf("%d,%u,%c", *pnum1, *pnum2, *pch);
}

