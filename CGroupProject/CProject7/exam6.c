#include <stdio.h>

void main() {

	// �迭���� �����͸� ����!!
	// ���1. �迭�� ���� : char pszData[] = "Test String";
	// ���2. �����ͷ� ����
	char* pszData = "Test String";
	// �����ּҰ��� pszData�� ����!!

	printf("%s\n", pszData);
	printf("[%p]%c\n", pszData,*pszData);
	printf("[%p]%c\n", pszData + 1, *(pszData+1));
	printf("[%p]%c\n", pszData + 2, *(pszData + 2));
	printf("[%p]%c\n", pszData + 3, *(pszData + 3));

	printf("%zd\n", sizeof(pszData)); // �⺻�ּ� 4byte(32bit), 8byte(64bit)
	printf("%zd\n", sizeof(*pszData)); // ����Ű�� ���� ���� ������Ÿ��ũ�� 1byte
	printf("%zd\n", sizeof(*pszData + 1)); // �����⺻�� ����ũ��� 4byte
	printf("%c\n", *pszData + 1); // (t+1) = u
}