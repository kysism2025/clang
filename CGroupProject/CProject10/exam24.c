#include <stdio.h>

struct student
{
	int num;
	double grade;
};

void main() {

	// ��(type) ������
	typedef struct student Student;
	Student s1;
}