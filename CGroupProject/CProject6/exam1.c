#include <stdio.h>

int main() {

	int arr[5]; // �迭 ����(����)
	int sum = 0;
	int i;

	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;

	for(i = 0; i < 5; i++) {
		sum += arr[i];
		printf("%d ", arr[i]);
	}
    printf("��ü�հ� : \n%d ", sum);

	return 0;
}