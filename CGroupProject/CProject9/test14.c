#include <stdio.h>
#include <string.h>

void main() {

	char name[80] = { 0 };
	char tel[80] = { 0 };
	char addr[100] = { 0 };
	char person_info[800] = { 0 }; // �ݵ�� �ʱ�ȭ

	printf("�̸��� �Է��ϼ��� : ");
	gets(name); // NULL����('\0')�� �ڵ����� �ٿ���
	strcat_s(person_info, sizeof(person_info), name);
	strcat_s(person_info, sizeof(person_info), ", ");

	printf("��ȭ��ȣ�� �Է��ϼ��� : ");
	gets(tel);
	strcat_s(person_info, sizeof(person_info), tel);
	strcat_s(person_info, sizeof(person_info), ", ");

	printf("�ּҸ� �Է��ϼ��� : ");
	gets(addr);
	strcat_s(person_info, sizeof(person_info), addr);

	puts(person_info);
}