#include <stdio.h>

void main() {

	// �迭���� ù ��° �迭��Ҹ� ����Ű�� �����͸� ��ȣȭ�� ���̴�.
	int ary[] = { 10,20,30,40,50 };
	int i = 0;
	for (i = 0; i < 5; i++)
		printf("%d\n", ary + i);
}