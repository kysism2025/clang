#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct profile
{
	char name[20];
	double grade;
	int english;
};

void input_data(struct profile*);
void elite(struct profile*);

void main() {
	
	struct profile new_staff[5];
	input_data(new_staff);

}

void input_data(struct profile* pf) {
	
	int i;

	printf("이름,학점,영어 점수를 입력하세요.");
	for (i = 0; i < 5; i++) {
		pf[i].name = (char *)malloc(30);
		scanf_s("%s", pf[i].name);
		printf("%s", pf[i].name);
	}
}

void elite(struct profile* pf) {

}