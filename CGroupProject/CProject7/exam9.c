#include <stdio.h>

void main() {

	char ch = 'A';
	int in = 100;
	double db = 100.0;

	char* cp = &ch;
	int* ip = &in;
	double* dp = &db;

	printf("%zd,%zd,%zd", sizeof(cp), sizeof(ip), sizeof(dp)); // ����Ű�� ���� �ּ� ũ��
	printf("%zd,%zd,%zd", sizeof(*cp), sizeof(*ip), sizeof(*dp)); // ����Ű�� ���� ������ Ÿ�� ũ��


	// %z ==> size_t ��ȣ���� ������(unsigned integer)���� sizeof, alignof, offsetof�� ��ȯ��



}