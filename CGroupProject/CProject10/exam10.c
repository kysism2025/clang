#include <stdio.h>

// ����ü : ���� ���� �ڷ���
// ����ü�� �迭�� �޸� �ٸ� ������ �ڷ����� ��� ó���� �� �ִ�
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

	printf("�й�:%d\n", s1.num);
	printf("����:%.1lf\n", s1.grade);

	//printf("%d\n", s1);
	printf("%p\n", s1);
	printf("%p\n", s1);
	printf("%p\n", s1);
	printf("%p\n", s1);
}