#include <stdio.h>

void main() {

	int nums[5];
	int max;
	int i;

	printf("�ټ� ���� ���ڸ� �Է��ϼ��� :");

	for (i = 0; i < 5; i++) {
		scanf_s("%d", &nums[i]);
	}

	max = nums[0];
	for (i = 0; i < 5; i++) {
		if (max < nums[i]) max = nums[i];
	}

	printf("���� ū ���� :%d�Դϴ�.\n", GetMax(nums));
}


int GetMax(int nums[]) {
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (max < *(nums + i)) max = *(nums+ i);
	}
	return max;
}


