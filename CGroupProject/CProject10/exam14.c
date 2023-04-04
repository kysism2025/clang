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
	s1.pf.ap = (char*)malloc(30); // Heap에 공간을 할당

	printf("나이를 입력하세요:");
	scanf_s("%d", &s1.pf.age);
	printf("\n키를 입력하세요:");
	scanf_s("%lf", &s1.pf.height);
	printf("\n이름을 입력하세요:");
	printf("크기:%d", sizeof(s1.pf.ap)); // 포인터 주소의 크기를 표시
	scanf_s("%s", s1.pf.ap, sizeof(s1.pf.ap));

	printf("점수를 입력하세요:");
	scanf_s("%d", &s1.num);
	printf("\n학점을 입력하세요:");
	scanf_s("%lf", &s1.grade);

	printf("이름:%s\n", s1.pf.ap);
	printf("나이:%d\n", s1.pf.age);
	printf("키:%.1lf\n", s1.pf.height);
	printf("학번:%d\n", s1.num);
	printf("학점:%.1f\n", s1.grade);

	free(s1.pf.ap);
}