#include <stdio.h>

int main() {
	int ages[5];
	int tot = 0;
	double avg;
	int i;

	printf("�ټ� ���� ���̸� �Է��ϼ���:");
	for (i = 0; i < 5; i++) {
	 scanf_s("%d", &ages[i]);
	 tot += ages[i];
	}

	for (i = 0; i < 5; i++) {
		if (i == 0) printf("�Է��� �ټ����� ���̴� ���� ");
		printf("%d ", *(ages + i));
	}
	printf("\n������ ���� : %d", tot);
	printf("\n������ ��� : %.1lf", tot/5.0);

	return 0;
}
