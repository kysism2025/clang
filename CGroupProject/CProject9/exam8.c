#include <stdio.h>
#include <malloc.h>

void main() {
	
	char fruit[80] = "apple";
	char* fruit2 = "banana";
	int len1, len2;

	len1 = strlen(fruit);  // null제외
	len2 = strlen(fruit2);  // null제외
	printf("문자열1의 길이:%d\n", len1);
	printf("문자열2의 길이:%d\n", len2);


	char* p_name;
	p_name = (char*)malloc(32);
	if (p_name != NULL) {

		printf("Your name : ");
		gets(p_name);

		printf("입력된 값:%s", p_name);
		free(p_name);
	}
	else {
		printf("메모리 할당에 실패");
	}
}