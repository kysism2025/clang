#include <stdio.h>


void exchange(int* cheoli, int* metel);

void main() {

	int cheoli = 10, metel = 20;
	printf("�Լ��� ȣ��Ǳ� ���� cheoli�� ����� ��: %d\n", cheoli);
	printf("�Լ��� ȣ��Ǳ� ���� metel �� ����� ��: %d\n", metel);

	exchange(&cheoli, &metel);
	printf("�Լ��� ȣ��� �Ŀ� cheoli�� ����� ��: %d\n", cheoli);
	printf("�Լ��� ȣ��� �Ŀ� metel �� ����� ��: %d\n", metel);

	char ment[] = "CProg";
	printf("��Ȯ��: %s\n", ment);
	printf("��Ȯ��: %c\n", *ment);
	printf("��Ȯ��: %c\n", *(ment + 1));
	printf("��Ȯ��: %c\n", *(ment + 2));
	printf("��Ȯ��: %c\n", *(ment + 3));
	printf("��Ȯ��: %c\n", *(ment + 4));
	printf("��Ȯ��: %c\n", *(ment + 5));
}

void exchange(int *cheoli, int *metel) {
	int temp;

	temp = *cheoli;
	*cheoli = *metel;
	*metel = temp;
}