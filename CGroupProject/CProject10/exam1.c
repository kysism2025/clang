#include <stdio.h>

void main() {
	
	// ���������� �Լ��� ���ϵǰ� ���� �޸𸮿��� �������.
	
	// ��������
	int a = 10, b = 20; 

	printf("�ٲٱ� �� a :  %d, b: %d \n", a, b);
	{
		int a = 30, b = 40;
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("�ٲ��� a :  %d, b: %d\n", a, b);
	// printf("%d\n", temp); �����߻�(���������� ����Ϸ��� �߱⶧��)
}