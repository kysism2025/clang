#include <stdio.h>

main() {

	int a;
	int *ap = &a;

	printf("ap��ü�� ����� �� :%x\n", ap); 
	printf("ap��ü�� ����� �� :%x\n", &ap);
	printf("ap����Ʈ ������ �ǹ� :%x\n", *ap);
	printf("ap����Ʈ ������ �ǹ� :%x\n", ap);

}