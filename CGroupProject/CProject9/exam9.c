#include <stdio.h>
#include <string.h>

void main() {

	char str1[20] = "banana";
	char str2[20] = "apple";
	char temp[20];
	int res;

	// 두 문자열을 비교하여 리턴하는 값(사전 순서)
	// str1 > str2 : 1     str1 < str2 : -1     str1 == str2 : 0
	res = strcmp(str1, str2);
	if (res > 0) {
		strcpy_s(temp, sizeof(temp), str1);
		strcpy_s(str1, sizeof(str1), str2);
		strcpy_s(str2, sizeof(str2), temp);
	}
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);

}