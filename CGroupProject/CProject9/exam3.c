#include <stdio.h>

void main() {

	// char a [] = "S"  ==> | S | '\0' | ==> 2 byte
	// char a = 'S'     ==> | S | ==> 1 byte

	int age;
	char* greeting;

	printf("나이를 입력하세요 : ");
	scanf_s("%d", &age);

	if (age > 30) {
		// "처음 뵙겠습니다."
		greeting = "처음 뵙겠습니다.";
	}
	else {
	
		// "반가워요"
		greeting = "반가워요";
	}
	printf("인사말:%s\n", greeting);
	printf("인사말:%p\n", greeting);
	greeting = "abcdefg";
	printf("인사말:%s\n", greeting);
	printf("인사말:%p\n", greeting);

	greeting[0] = 'x'; // Heap영역의 접근 불가 아래 실행안됨!
	printf("인사말:%s\n", greeting);

}