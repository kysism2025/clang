#include <stdio.h>

void ShowArrayElem(int* arr1, int len);

void main() {

	int arr1[3] = { 1,2,3 };
	int arr2[5] = { 6,7,8,9,10 };

	ShowArrayElem(arr1, sizeof(arr1)/ sizeof(arr1[0]));
	ShowArrayElem(arr2, sizeof(arr2) / sizeof(arr2[0]));

}

void ShowArrayElem(int *arr1, int len) {
	int* ap = arr1;
	int i = 0;
	for (i = 0; i < len; i++) {
		printf("°ª:%d\n", *ap++);
	}
}