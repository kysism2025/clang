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

	printf("이름,학점,영어 점수를 입력하세요.\n");
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
	
	//학점 4.0이상이고 영어점수가 900점이상
	printf("\n선발된 엘리트 학생은 다음과 같습니다.\n");
	for (int i = 0; i < count; i++) {
		if (pf->grade >= 4.0 && pf->english >= 900) {
			printf("%s, %.1lf, %d\n", pf->name, pf->grade, pf->english);
		}
		pf++;
	}
}