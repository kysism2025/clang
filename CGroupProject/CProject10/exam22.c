#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct profile
{
	//char* name;
	char name[20];
	double grade;
	int english;
} PRO;

void input_data(struct profile*, int);
void elite(struct profile*, int);

void main() {

	struct profile new_staff[2];

	int size = sizeof(new_staff) / sizeof(new_staff[0]);
	input_data(new_staff, size);
	elite(new_staff , size);


	//printf("%d,%d", );
}

void input_data(struct profile* pf, int count) {

	printf("�̸�,����,���� ������ �Է��ϼ���.\n");
	for (int i = 0; i < count; i++) {
		
		scanf_s("%s", (pf+i)->name, 20);
		scanf_s("%lf", &(pf + i)->grade);
		scanf_s("%d", &(pf + i)->english);
		printf("%s, %.1lf, %d\n", (pf + i)->name, (pf + i)->grade, (pf + i)->english);
		/*
 		pf->name = (char*)malloc(30);
		scanf_s("%s", pf->name);
		scanf_s("%lf", &pf->grade);
		scanf_s("%d", &pf->english);
		printf("%s, %.1lf, %d\n", pf->name, pf->grade, pf->english);
		
		pf++;
		*/
	}
}

void elite(struct profile* pf, int count) {
	
	//���� 4.0�̻��̰� ���������� 900���̻�
	printf("\n���ߵ� ����Ʈ �л��� ������ �����ϴ�.\n");
	for (int i = 0; i < count; i++) {
		if (pf->grade >= 4.0 && pf->english >= 900) {
			printf("%s, %.1lf, %d\n", pf->name, pf->grade, pf->english);
		}
		pf++;
	}
}