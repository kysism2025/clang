#include <stdio.h>

int main() {
	int ages[5];
	int tot = 0;
	double avg;
	int i;

	printf("다섯 명의 나이를 입력하세요:");
	for (i = 0; i < 5; i++) {
	 scanf_s("%d", &ages[i]);
	 tot += ages[i];
	}

	for (i = 0; i < 5; i++) {
		if (i == 0) printf("입력한 다섯명의 나이는 각각 ");
		printf("%d ", *(ages + i));
	}
	printf("\n나이의 총합 : %d", tot);
	printf("\n나이의 평균 : %.1lf", tot/5.0);

	return 0;
}
