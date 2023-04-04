#include <stdio.h>

void main() {
	int* ip;
	double db = 6.5;
	//ip = &db;
	(double *)ip = &db;

	printf("%p\n", ip);
}