#include <stdio.h>

void main() {

	// 배열명이 포인터를 말함!!
	// 방법1. 배열로 선언 : char pszData[] = "Test String";
	// 방법2. 포인터로 선언
	char* pszData = "Test String";
	// 시작주소값을 pszData가 가짐!!

	printf("%s\n", pszData);
	printf("[%p]%c\n", pszData,*pszData);
	printf("[%p]%c\n", pszData + 1, *(pszData+1));
	printf("[%p]%c\n", pszData + 2, *(pszData + 2));
	printf("[%p]%c\n", pszData + 3, *(pszData + 3));

	printf("%zd\n", sizeof(pszData)); // 기본주소 4byte(32bit), 8byte(64bit)
	printf("%zd\n", sizeof(*pszData)); // 가르키는 곳의 값의 데이터타입크기 1byte
	printf("%zd\n", sizeof(*pszData + 1)); // 덧셈기본의 연산크기는 4byte
	printf("%c\n", *pszData + 1); // (t+1) = u
}