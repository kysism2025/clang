#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct profile {
	int age;
	double height;
	char name[20];
	char* ap;
};

struct student {
	struct profile pf;
	int num;
	double grade;
};

void main() {

	struct student s1;
	s1.pf.ap = (char*)malloc(30); // Heap�� ������ �Ҵ�

	printf("���̸� �Է��ϼ���:");
	scanf_s("%d", &s1.pf.age);
	printf("\nŰ�� �Է��ϼ���:");
	scanf_s("%lf", &s1.pf.height);
	printf("\n�̸��� �Է��ϼ���:");
	printf("ũ��:%d", sizeof(s1.pf.ap)); // ������ �ּ��� ũ�⸦ ǥ��
	scanf_s("%s", s1.pf.ap, sizeof(s1.pf.ap));

	printf("������ �Է��ϼ���:");
	scanf_s("%d", &s1.num);
	printf("\n������ �Է��ϼ���:");
	scanf_s("%lf", &s1.grade);

	printf("�̸�:%s\n", s1.pf.ap);
	printf("����:%d\n", s1.pf.age);
	printf("Ű:%.1lf\n", s1.pf.height);
	printf("�й�:%d\n", s1.num);
	printf("����:%.1f\n", s1.grade);

	free(s1.pf.ap);
}