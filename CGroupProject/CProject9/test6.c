#include <stdio.h>

void user_strcpy(char* des, char* src);

void main() {

	char fruit[20];
	user_strcpy(fruit, "strawberry");
	printf("배열에 저장된 문자열 :%s", fruit);
}

void user_strcpy(char* des, char* src) {

	int i = 0;
	while (*src != '\0') {
		*des = *src;
		des++;
		src++;
	}
	*des = *src;
	/*
	while (1) {
		//des[i] = *(src + i);
		*(des + i) = *(src + i);
		if (*(src + i) == '\0') break;
		i++;
	}
	*/
	/*
	while (*(src + i) != '\0') {
		*(des + i) = *(src + i);
		i++;
	}
	des[i] = '\0';
	*/
}