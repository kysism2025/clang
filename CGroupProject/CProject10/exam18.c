#include <stdio.h>

struct student
{
	int num;
	char name[20];
	int score[5];
	double avg;
};

struct student avg_prn(struct student s);

int main() {

	struct student s1 = { 315, "홍길동", {82,93,74,90,65} };
	
	printf("학번:%d\n", s1.num);
	printf("이름:%s\n", s1.name);

	s1 = avg_prn(s1);
	printf("평균:%.1lf\n", s1.avg);
}


struct student avg_prn(struct student s) {

	int sum = 0;
	int size = sizeof(s.score) / sizeof(s.score[0]);
	printf("점수:");
	for (int i = 0; i < size; i++) {
		sum += s.score[i];
		printf("%d ", s.score[i]);
	}
	printf("\n합계:%d\n", sum);
	s.avg = sum / size * (1.0);

	return s;
}