#include <stdio.h>

void main() {

	int nums[5];
	int max;
	int i;

	printf("다섯 개의 숫자를 입력하세요 :");

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &nums[i]);
	}

	max = nums[0];
	for (i = 0; i < 5; i++) {
		if (max < nums[i]) max = nums[i];
	}

	printf("가장 큰 값은 :%d입니다.\n", GetMax(nums));
}


int GetMax(int nums[]) {
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (max < *(nums + i)) max = *(nums+ i);
	}
	return max;
}


