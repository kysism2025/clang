#include <stdio.h>
#include <stdlib.h>

void main() {
	
	// ���������� �����Ϸ��� �����Ͻ� �޸𸮿� �Ҵ��
	int* ip;
	double* dp;
	// int a;
	
	// ������ �ɶ� �޸� ����(4byte)�� ���� ==> 4byte������� �ּҷ� �����ض�~
	ip = (int*)malloc(sizeof(int));

	// ������ �ɶ� �޸� ����(8byte)�� ���� ==> 8byte������� �ּҷ� �����ض�~
	dp = (double*)malloc(sizeof(double));

	*ip = 10;
	*dp = 3.4;
	
	printf("���������� ��� : %d\n", *ip);
	printf("�Ǽ������� ��� : %.1lf\n", *dp);

	free(ip);
	free(dp);
}
