#include <stdio.h>

void main() {

	int a = 10;
	int *ap = &a;  // ������ ��!! ( �� ����� �ּ��� ���� ����ų �ּҸ� ������ ���̶�� ��)

	printf("%d\n", a);   // a��
	printf("%x\n", &a);  // a�ּ�
	printf("%x\n", ap);  // a�ּ�
	printf("%x\n", &ap); // ap�� �ּ�
	printf("%d\n", *ap); // ap�� ����� �ּҰ� ����Ű�� ���� ��

}