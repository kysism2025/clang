#include <stdio.h>

void main() {

	int arr[3] = { 15, 25, 35 };
	//int* ptr = arr;
	int* ptr = &arr[0];  // �迭�̸��� �������� ����� ����!!!

	printf("%d %d\n", *ptr, *arr);
	printf("%d %d\n", ptr[0], arr[0]); // �Ѵ� �����ּ��̴ϱ� ����
	printf("%d %d\n", ptr[1], arr[1]);
	printf("%d %d\n", ptr[2], arr[2]);

}