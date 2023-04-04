#include <stdio.h>

// 구조체 : 내가 만든 자료형
// 구조체는 배열과 달리 다른 형태의 자료형도 묶어서 처리할 수 있다
struct student
{
	int num;
	double grade;
};

// 
void main() {
	
	struct student s1;

	s1.num = 2;
	s1.grade = 2.7;

	printf("학번:%d\n", s1.num);
	printf("학점:%.1lf\n", s1.grade);

	//printf("%d\n", s1);
	printf("%p\n", s1);
	printf("%p\n", s1);
	printf("%p\n", s1);
	printf("%p\n", s1);
}