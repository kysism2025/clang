#include <stdio.h>

void main() {

	char str[] = "Good morning!";

	// ���ڿ� �������� �ڵ����� '\0'�� �ٱ⶧���� 14�ڸ��� ����
	printf("�迭 str�� ũ��: %d\n", sizeof(str));

	printf("�� ���� ������ ���: %c\n", str[13]); // ������ ��Ÿ��.
	printf("�� ���� ������ ���: %d\n", str[13]); // 0���� ���� Ascii�ڵ�� NULL���ڴ� 0
	printf("�� ���� ������ ���: %d\n", str[4]); // ������ ��Ÿ��. Ascii 32

	str[12] = '?'; // �迭�� ���氡�� ==> �����̴ϱ�!!
	printf("�迭 str�� ũ��: %s\n", str);

}