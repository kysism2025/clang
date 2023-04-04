#include <stdio.h>

void main() {

	int num1 = 100, num2 = 100;
	int *pnum;

	pnum = &num1;
	printf("%x\n", pnum);

	pnum = &num1;
	*pnum = *pnum + 30; // (*pnum) += 30; // 130
	printf("%d\n", *pnum);

	pnum = &num2;
	*pnum = *pnum - 30; // (*pnum) -= 30; // 70
	printf("%d\n", *pnum);

}