#include <stdio.h>

int total(int kor, int eng, int mat); //�Լ� ���� �Ǵ�  int total(int, int, int)
double average(int tot);

void main() {
	int kor, eng, mat;
	int tot;
	double avg;

	printf("�� ������ ������ �Է��ϼ��� :");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	tot = total(kor, eng, mat);
	avg = average(tot);

	printf("����:%d,���:%.1lf\n", tot, avg);
}

int total(int kor, int eng, int mat) {
	int tot;
	tot = kor + eng + mat;
	return tot;
}

double average(int tot) {
	double avg;
	avg = tot / 3.0;
	return avg;
}