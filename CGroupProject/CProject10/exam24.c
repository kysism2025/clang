#include <stdio.h>

struct student
{
	int num;
	double grade;
};

void main() {

	// 형(type) 재정의
	typedef struct student Student;
	Student s1;
}