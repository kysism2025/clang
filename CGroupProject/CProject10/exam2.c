#include <stdio.h>

void main() {

	int val = 10;
	{
		int val = 20;
		{
			val++; // ���� ����� ����
		}
		printf("val : %d\n", val);
	}
	printf("val : %d\n", val);
}