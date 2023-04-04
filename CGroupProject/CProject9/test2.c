#include <stdio.h>

void main() {

	printf("주소값을 출력 : %p\n", "dream");
	printf("첫번째 문자를 출력 : %c\n", *"dream");
	printf("첫번째 문자를 출력 : %c\n", *("dream"+2));
	printf("첫번째 문자를 출력 : %c\n", "dream"[2]);
}


