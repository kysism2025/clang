#include <stdio.h>

void line_up(double* mp, double* ip, double* np);
void exg(double* exg1, double* exg2);

void main() {

	double max, mid, min;

	printf("���� �� ���� �Է��ϼ���");
	scanf_s("%lf%lf%lf", &max, &mid, &min);

	// �Լ��� ȣ���ϴµ��� �޸𸮿��� �����ϴٰ� ����� �� ��ġ�� �������.
	line_up(&max, &mid, &min);
	printf("ū������ ���ʴ�� ����ϸ� : %.1lf,%.1lf,%.1lf\n",max,mid,min);
}

void line_up(double* mp, double* ip, double* np) {

	if (*mp < *ip)
		exg(mp, ip);

	if(*mp < *np)
		exg(mp, np);

	if (*ip < *np)
		exg(ip, np);
}

void exg(double* exg1, double* exg2) {
	double temp;

	temp = *exg1;
	*exg1 = *exg2;
	*exg2 = temp;
}
