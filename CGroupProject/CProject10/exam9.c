#include <stdio.h>
#include <stdlib.h>

void main() {
	
	// 변수선언은 컴파일러가 컴파일시 메모리에 할당됨
	int* ip;
	double* dp;
	// int a;
	
	// 실행이 될때 메모리 공간(4byte)를 생성 ==> 4byte만든것을 주소로 접근해라~
	ip = (int*)malloc(sizeof(int));

	// 실행이 될때 메모리 공간(8byte)를 생성 ==> 8byte만든것을 주소로 접근해라~
	dp = (double*)malloc(sizeof(double));

	*ip = 10;
	*dp = 3.4;
	
	printf("정수형으로 사용 : %d\n", *ip);
	printf("실수형으로 사용 : %.1lf\n", *dp);

	free(ip);
	free(dp);
}
