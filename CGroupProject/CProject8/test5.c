#include <stdio.h>

void main() {

	int arr[3] = { 15, 25, 35 };
	//int* ptr = arr;
	int* ptr = &arr[0];  // 배열이름과 포인터의 관계는 동급!!!

	printf("%d %d\n", *ptr, *arr);
	printf("%d %d\n", ptr[0], arr[0]); // 둘다 시작주소이니까 가능
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);

}