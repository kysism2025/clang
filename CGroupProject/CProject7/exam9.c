#include <stdio.h>

void main() {

	char ch = 'A';
	int in = 100;
	double db = 100.0;

	char* cp = &ch;
	int* ip = &in;
	double* dp = &db;

	printf("%zd,%zd,%zd", sizeof(cp), sizeof(ip), sizeof(dp)); // 가르키는 곳의 주소 크기
	printf("%zd,%zd,%zd", sizeof(*cp), sizeof(*ip), sizeof(*dp)); // 가르키는 곳의 내용의 타입 크기


	// %z ==> size_t 부호없는 정수형(unsigned integer)으로 sizeof, alignof, offsetof의 반환값



}