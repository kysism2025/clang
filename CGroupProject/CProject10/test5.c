#include <stdio.h>

void increase();
// (static) int sum = 100;

void main() {
	int i;
	for (i = 0; i < 5; i++) {
		increase();
	}
}

void increase() {
	static int sum = 0;
	sum++;
	printf("sum : %d\n", sum); // 1,2,3,4,5
}


// Stack  : LIFO ( ���߿� ������� ���� ������) increase()�Լ��� int sum = 0;
// Heap   : ��ӳ�������
// static : ���� ������ ������ ������� static int sum = 0; ( �ѹ� ���ǵǸ� �װ����� ������ �ٽ� �ʱ�ȭ���� �ʴ´�. )