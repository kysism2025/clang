#include <stdio.h>

void main() {

	// char배열 나머지 공간에 대해서는 '\0'으로 채워지기 때문에 쓰레기값이 출력되지 않음
	// 단, 초기화하지 않은 경우 '\0'으로 채워지지 않음
	// scanf함수로 입력을 받는 경우 문자열에 대해 자동으로 '\0'을 채워줌
	char str[50] = "I like C Programming";
	char str2[10];


	printf("string:%s\n", str);
	printf("string:%c\n", str[19]);
	printf("string:%c\n", str[20]);
	printf("string:%c\n", str[21]);

	printf("string:%s\n", str2);

	str[8] = '\0';
	// '\0'을 처음 만날때까지 문자열로 인식해서 출력한다.
	printf("string:%s\n", str);

	str[6] = '\0';
	// '\0'을 처음 만날때까지 문자열로 인식해서 출력한다.
	printf("string:%s\n", str);

	str[1] = '\0';
	// '\0'을 처음 만날때까지 문자열로 인식해서 출력한다.
	printf("string:%s\n", str);


}