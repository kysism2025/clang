#include <stdio.h>

void swap(int* a, int* b);

void main() {

	int arr[5] = { 0,1,2,3,4 };
	int i, r;
	int tmp;
	int size;
	
	printf("배열의 값: ");
	size = sizeof(arr) / sizeof(arr[0]);
	r = size - 1;

	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}

	for (i = 0; i < size; i++) {
		/*
		switch(i) {
			case 0: 
				swap1(&arr[0], &arr[4]); 
				break;
			case 1: 
				swap1(&arr[1], &arr[3]); 
				break;
		}
		*/
		/*
		switch (i) {
		case 0:
			tmp = arr[0];
			arr[0] = arr[4];
			arr[4] = tmp;
			break;
		case 1:
			tmp = arr[1];
			arr[1] = arr[3];
			arr[3] = tmp;
			break;
		}
		*/
		if ((size-1)/2 <= r) {
			tmp = arr[i];
			arr[i] = arr[r];
			arr[r] = tmp;
			r--;
		}
	}

	printf("\n변경후 값: ");
	for (i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

void swap1(int *a, int *b){
	int tmp;
	printf("바꾸기전 %d, %d\n", *a, *b);
	
	tmp = *a;
	printf("tmp:%d\n", tmp);
	printf("변경1 a,b의 주소값확인 %d,%d\n", *a, *b);
	*a = *b;
	printf("변경2 a,b의 주소값확인 %d,%d\n", *a, *b);
	*b = tmp;
	printf("변경3 a,b의 주소값확인 %d,%d\n", *a, *b);
}

