#include <stdio.h>

void main() {

	int val = 10;
	{
		int val = 20;
		{
			val++; // 가장 가까운 변수
		}
		printf("val : %d\n", val);
	}
	printf("val : %d\n", val);
}