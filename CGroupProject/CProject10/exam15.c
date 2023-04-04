#include <stdio.h>

struct student getmax(struct student st1, struct student st2);

struct student {
	int num;
	char name[20];
	double grade;
}s1 = { 315, "홍길동", 2.4};

void main() {

	struct student s2 = { 247, "이순신", 3.7 };
	struct student s3 = { 330, "세종대왕", 4.4 };
	struct student max = { 0, };

	max = s1;
	max = getmax(s1, s2);
	max = getmax(s1, s3);
	max = getmax(s2, s3);

	printf("나이 %d\n", max.num);
	printf("이름 %s\n", max.name);
	printf("학점 %.1lf\n", max.grade);
}

struct student getmax(struct student st1, struct student st2) {

	if (st1.grade < st2.grade) {
		return st2;
	}
	else {
		return st1;
	}
	
}