#include <stdio.h>

typedef struct {

	char num;
	double grade;

} Student;

void data_prn(Student*);
void data_prn2(Student*);

void main() {

	Student ss[3] = { {0},{0},{0} };
	printf("배열의크기:%d, %d\n", sizeof(ss), sizeof(Student));
	Student s1 = { 315, 4.2 };
	data_prn(&s1);
	data_prn2(ss);
}

void data_prn(Student* st) {
	
	printf("학번:%d\n", st->num);
	printf("학점:%.1lf\n", st->grade);
}

void data_prn2(Student* st) {

	printf("배열의크기:%d, %d\n", sizeof(st), sizeof(Student));
}