#include <stdio.h>

struct student getmax(struct student st1, struct student st2);

struct student {
	int num;
	char name[20];
	double grade;
}s1 = { 315, "ȫ�浿", 2.4};

void main() {

	struct student s2 = { 247, "�̼���", 3.7 };
	struct student s3 = { 330, "�������", 4.4 };
	struct student max = { 0, };

	max = s1;
	max = getmax(s1, s2);
	max = getmax(s1, s3);
	max = getmax(s2, s3);

	printf("���� %d\n", max.num);
	printf("�̸� %s\n", max.name);
	printf("���� %.1lf\n", max.grade);
}

struct student getmax(struct student st1, struct student st2) {

	if (st1.grade < st2.grade) {
		return st2;
	}
	else {
		return st1;
	}
	
}