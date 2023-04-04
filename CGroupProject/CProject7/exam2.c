#include <stdio.h>

main() {

	int a;
	int *ap = &a;

	printf("ap제체에 저장된 값 :%x\n", ap); 
	printf("ap제체에 저장된 값 :%x\n", &ap);
	printf("ap포인트 변수의 의미 :%x\n", *ap);
	printf("ap포인트 변수의 의미 :%x\n", ap);

}