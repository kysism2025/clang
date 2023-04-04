#include <string.h>
#include <stdio.h>


void main() {

	int arr[5] = { 10,20,30,40,50 }; // 배열명은 주소값이다.
	//int* ap = arr;
	int* ap;
	ap = &arr[0];  // arr = &arr[0]

	printf("첫번째 배열 요소의 주소값: %p\n", ap);
	printf("첫번째 배열 요소의 주소값: %p\n", arr);
	printf("첫번째 배열 요소의 값    : %d\n", *ap);

	// ap = ap + 4;
	// ap = &arr[0] + 4;

	printf("두번째 배열 요소의 주소값: %p\n", arr + 1);
	printf("두번째 배열 요소의 값    : %d\n", *(ap + 1));

	printf("다섯번째 배열 요소의 주소값: %p\n", arr + 4);
	printf("다섯번째 배열 요소의 값    : %d\n", *(ap + 4));

	/*
	char str[] = "BlockDMask";
	char* ptr = strchr(str, 'M');
	if (ptr != NULL) {
		printf("%c, %c", *ptr, *(ptr+1));
	}
	*/


}