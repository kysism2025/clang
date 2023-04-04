#include <stdio.h>

void main() {

	int i;
	//char word[80] = "            ";
	char word[100000];
	printf("단어를 입력하세요 :");

	// word앞에 &를 붙이지 않는 이유는 배열도 포인터처럼 주소를 담고 있으므로
	//scanf_s("%s", word, 80); // 문자열을 자동으로 넣어줌
	scanf("%[^\n]s", word);

	/*
	i = 0;
	while (1) {
		if (word[i] == '\0') {
			break;
		}
		i++;
	}
	*/
	
	//printf("%s단어의 길이는 %d자입니다.\n", word, i);
	printf("%s\n", word);
}