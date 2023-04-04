#include <stdio.h>

void ary_prn1(int* arr);
void ary_prn2(int index, int* arr);

void main() {

	int ary[5] = { 10,20,30,40,50 };
	int* ap = ary;
	int size = sizeof(ary) / sizeof(ary[0]);

	ary_prn1(ap);
	
	for (int i = 0; i < size; i++) {
		ary_prn2(i, ap);
		ap++;
	}
}

void ary_prn1(int* arr) {

	for (int i = 0; i < 5; i++) {
		printf("값:%d\n", *arr);
		arr++;
	}
}

void ary_prn2(int index, int* arr) {

	printf("%d번째 값:%d\n", (index + 1), *arr);
}

