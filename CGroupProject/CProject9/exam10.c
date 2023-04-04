#include <stdio.h>

void sum(int, int);
extern int result;
extern int g_data1;
extern int g_data2;
extern int g_data3 = 0;
extern int g_data4 = 0;
extern int g_data5;

void main() {
	sum(5, 3);
	printf("5+3=%d\n", result);
}