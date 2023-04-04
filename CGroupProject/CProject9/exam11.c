#include <stdio.h>

void main() {

	char seasion[80];

	printf("계정명을 입력하세요:");
	scanf_s("%s", seasion, 80);

	printf("입력한 문자열:%s\n", seasion);
	int spring = strcmp(seasion, "봄");
	int summer = strcmp(seasion, "여름");
	int autumn = strcmp(seasion, "가을");
	int winter = strcmp(seasion, "겨울");

	if (spring == 0) {
		printf("개나리\n");
	}
	else if (summer == 0) {
		printf("장미\n");
	}
	else if (autumn == 0) {
		printf("국화\n");
	}
	else if (winter == 0) {
		printf("매화\n");
	}
	else {
		printf("계절명을 잘못입력하셨습니다.\n");
	}
}
