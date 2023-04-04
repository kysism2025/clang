#include <stdio.h>

void main() {

	// Stack에   Heap에 있는 정보를 str1에 복사한다.
	char str1[] = "My String";

	// Heap의 시작 주소를 str2에 복사한다.
	char* str2 = "Your String";
	//str2 = "Your String";

	printf("%s %s\n", str1, str2);
	printf("%p %p\n", &str1, str2);

	str2 = "Our String";
	printf("%s %s\n", str1, str2);
	printf("%p %p\n", &str1, str2);

	// 복사된 Stack영역의 [0]번째 요소를 변경한다.
	str1[0] = 'X';
	printf("%s %s\n", str1, str2);

	// Heap은 접근 가능하지만 값을 바꿀수 없음
	//str2[0] = 'X';
	//printf("%s %s\n", str1, str2);
}