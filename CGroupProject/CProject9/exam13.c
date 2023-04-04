#include <stdio.h>

void main() {
	char str[80] = { 0 };
	printf("문자열을 입력하세요 :");
	scanf_s("%s", str, 80); // 빈칸이 들어간 문자열은 입력할수 없다.
	//gets(str); // get string
	// printf("입력된 문자열 : %s\n", str);
	// puts("입력한 문자열 : %s\n",str); ==> 형식이 잘못됨
	puts(str);
}