#include <stdio.h>

void main() {
	
	double ary[] = { 1.5, 20.1,16.4,2.3,3.5 };
	double sum = 0.0;
	double avg = 0.0;
	
	int size = sizeof(ary) / sizeof(ary[0]);

	// ary = 100;
    *ary = *ary + 100;
	printf("현재값:%.1lf\n", *ary);
	printf("현재값:%.1lf\n", *&ary[0]);
	printf("현재값:%.1lf\n", ary[0]);

	for (int i = 0; i < size; i++) {
		sum += *(ary + i);
	}

	avg = sum / size * 1.0;

	printf("요소의 갯수:%d\n", size);
	printf("합       계:%.2lf\n", sum);
	printf("평  균   값:%.2lf\n", avg);

}