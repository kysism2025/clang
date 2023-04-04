#include <stdio.h>

void main() {

	char str[64];

	while (1) {
		printf("입력 (종료는 exit라고 입력) : ");
		gets_s(str, sizeof(str));

		printf("비교결과:%d", strcmp(str, "exit"));

		if (!strcmp(str, "exit")) break;
		printf("입력값 확인: %s\n", str);
	}
}