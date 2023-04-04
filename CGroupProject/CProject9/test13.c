#include <stdio.h>
#include <string.h>

void main() {
	
	char novel[800] = { 0 };
	char str_in[80] = { 0 };
	char header[24] = "현재까지의 줄거리: ";

	strcpy_s(novel, sizeof(novel), header);
	
	while (1) {
		printf("문자열을 입력하세요:");
		gets(str_in);
		
		if (strcmp(str_in, "끝") == 0) break;

		strcat_s(novel, sizeof(novel), str_in);
		puts(novel);
		printf("\n");
	}
	/*
	while (strcmp(str_in, "끝") != 0) {

		
		printf("문자열을 입력하세요:");
		gets(str_in);

		strcat_s(novel, sizeof(novel), str_in);
		puts(novel);
		printf("\n");
	}
	*/
}