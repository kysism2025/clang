#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

struct cracker
{
	int price;
	int calories;
	char *name;
};

void main() {

	struct cracker basasak;
	//char temp[32];

	basasak.name = (char*)malloc(30);

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf_s("%d", &basasak.price);
	scanf_s("%d", &basasak.calories);
	scanf_s("%s", basasak.name, 30);
	//scanf_s("%s", temp, 32); // ���� HEAP�� ����Ұ�

	//int len = strlen(temp) + 1;
	//basasak.name = (char*)malloc(len);
	//memcpy(basasak.name, temp, len + 1);

	free(basasak.name);
	
	printf("�ٻ���� ����:%d��\n", basasak.price);
	printf("�ٻ���� ����:%dkal\n", basasak.calories);
	printf("�ٻ���� �̸�:%s\n", basasak.name);
}