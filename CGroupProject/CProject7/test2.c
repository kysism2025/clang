#include <stdio.h>

void line_up(double* mp, double* ip, double* np);
void exg(double* exg1, double* exg2);

void main() {

	double max, mid, min;

	printf("숫자 세 개를 입력하세요");
	scanf_s("%lf%lf%lf", &max, &mid, &min);

	// 함수는 호출하는동안 메모리에서 존재하다가 사용을 다 마치고 사라진다.
	line_up(&max, &mid, &min);
	printf("큰수부터 차례대로 출력하면 : %.1lf,%.1lf,%.1lf\n",max,mid,min);
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
