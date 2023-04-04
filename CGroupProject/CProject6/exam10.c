#include <stdio.h>

void main() {

	char str[] = "Good morning!";

	// 문자열 마지막에 자동으로 '\0'가 붙기때문에 14자리가 나옴
	printf("배열 str의 크기: %d\n", sizeof(str));

	printf("널 문자 문자형 출력: %c\n", str[13]); // 공백이 나타남.
	printf("널 문자 문자형 출력: %d\n", str[13]); // 0으로 나옴 Ascii코드로 NULL문자는 0
	printf("널 문자 문자형 출력: %d\n", str[4]); // 공백이 나타남. Ascii 32

	str[12] = '?'; // 배열도 변경가능 ==> 변수이니까!!
	printf("배열 str의 크기: %s\n", str);

}