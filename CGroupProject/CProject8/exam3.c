#include <stdio.h>

void main() {

	// 배열명은 첫 번째 배열요소를 가리키는 포인터를 기호화한 것이다.
	int ary[] = { 10,20,30,40,50 };
	int i = 0;
	for (i = 0; i < 5; i++)
		printf("%d\n", ary + i);
}