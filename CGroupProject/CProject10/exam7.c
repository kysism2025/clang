#include <stdio.h>

double get_item(double*);

void main() {
	double ary[] = {0.1,0.3,0.5,0.7,0.9};
	double res;

	res = get_item(ary);
	printf("ù��° ȣ���Ҷ�:%.1lf\n", res);  // 0.1

	res = get_item(ary);
	printf("�ι�° ȣ���Ҷ�:%.1lf\n", res);  // 0.3
	
}

/*
double get_item(double* ap) {
	return *ap;
}
*/

double get_item(double* ap) {

	static int i = 0;
	double temp;
	temp = *(ap + i);
	i++;

	return temp;
}