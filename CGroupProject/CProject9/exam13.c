#include <stdio.h>

void main() {
	char str[80] = { 0 };
	printf("���ڿ��� �Է��ϼ��� :");
	scanf_s("%s", str, 80); // ��ĭ�� �� ���ڿ��� �Է��Ҽ� ����.
	//gets(str); // get string
	// printf("�Էµ� ���ڿ� : %s\n", str);
	// puts("�Է��� ���ڿ� : %s\n",str); ==> ������ �߸���
	puts(str);
}