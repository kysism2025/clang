#include <string.h>
#include <stdio.h>


void main() {

	int arr[5] = { 10,20,30,40,50 }; // �迭���� �ּҰ��̴�.
	//int* ap = arr;
	int* ap;
	ap = &arr[0];  // arr = &arr[0]

	printf("ù��° �迭 ����� �ּҰ�: %p\n", ap);
	printf("ù��° �迭 ����� �ּҰ�: %p\n", arr);
	printf("ù��° �迭 ����� ��    : %d\n", *ap);

	// ap = ap + 4;
	// ap = &arr[0] + 4;

	printf("�ι�° �迭 ����� �ּҰ�: %p\n", arr + 1);
	printf("�ι�° �迭 ����� ��    : %d\n", *(ap + 1));

	printf("�ټ���° �迭 ����� �ּҰ�: %p\n", arr + 4);
	printf("�ټ���° �迭 ����� ��    : %d\n", *(ap + 4));

	/*
	char str[] = "BlockDMask";
	char* ptr = strchr(str, 'M');
	if (ptr != NULL) {
		printf("%c, %c", *ptr, *(ptr+1));
	}
	*/


}