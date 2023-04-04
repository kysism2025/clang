#include <stdio.h>

void main() {

	char word[80];
	int i = 0;
	int count = 0;

	printf("단어를 입력하세요:");
	scanf_s("%s", word, 80);

	while (1) {
		if (word[count] == '\0') break;
		count++;
	}
	// 편법
	// for (i = 0; word[i] != '\0'; i++);
	// count = i;
	/*
	int size = sizeof(word) / sizeof(word[0]);
	for (i = 0; i < size; i++) {
		if (word[i] != '\0') {
			printf("%c", word[i]);
		}
	}
	*/

	printf("입력된 단어: %s\n", word);
	printf("\n입력된 단어갯수: %d\n", count);

	printf("단어를 뒤집으면1:");

	for (i = count - 1; i >= 0; i--) {
		printf("%c", word[i]);
	}

	printf("\n단어를 뒤집으면2:");

	// 문자열을 출력하는 함수 puts()
	puts(word);

}