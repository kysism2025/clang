#include <stdio.h>

void main() {

	char seasion[80];

	printf("�������� �Է��ϼ���:");
	scanf_s("%s", seasion, 80);

	printf("�Է��� ���ڿ�:%s\n", seasion);
	int spring = strcmp(seasion, "��");
	int summer = strcmp(seasion, "����");
	int autumn = strcmp(seasion, "����");
	int winter = strcmp(seasion, "�ܿ�");

	if (spring == 0) {
		printf("������\n");
	}
	else if (summer == 0) {
		printf("���\n");
	}
	else if (autumn == 0) {
		printf("��ȭ\n");
	}
	else if (winter == 0) {
		printf("��ȭ\n");
	}
	else {
		printf("�������� �߸��Է��ϼ̽��ϴ�.\n");
	}
}
