#include <stdio.h>

void changeValue(double* aa, double* bb);

void main() {

	double a = 1.3;
	double b = 1.7;
	double* ap, * bp;
	double temp;

	printf("�ٲٱ� �� a,b��: %.1lf, %.1lf\n",a,b);
	ap = &a;
	bp = &b;

	//changeValue(ap, bp);
	
	temp = *ap;
	*ap = *bp;
	*bp = temp;
	
	printf("�ٲ��� a,b��: %.1lf, %.1lf\n",a,b);
}




void changeValue(double* aa, double* bb) {

	double temp;
	temp = *aa;
	*aa = *bb;
	*bb = temp;
}


