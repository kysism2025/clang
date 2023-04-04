#include <stdio.h>

double ary_avg(int*, int);

void main() {

	int arr[5] = { 75,80,92,88,98 };
	int size = sizeof(arr) / sizeof(arr[0]);
	
	double avg = ary_avg(arr, size);
	printf("%.1lf\n", avg);
}

double ary_avg(int* ary, int len) {

	int sum = 0;
	double avg;
	
	for (int i = 0; i < len; i++) {
		sum += *(ary++);
	}
	avg = sum / (double)len;

	return avg;
}