#include <stdio.h>

void main() {
	char str[80] = { 0 };
	int ch;
	int i;

	printf("문자열을 입력하세요 : ");
	for (i = 0; i < 4; i++) {
		ch = getchar(); // 하나의 문자(NULL문자를 자동으로 붙여주지 않음)
		// str[i] = ch;
		*(str + i) = ch;
	}
	str[4] = '\0';
	//printf("입력된 문자열 : ");
	//printf("%s\n", str);

	i = 0;
	while (1)
	{
		ch = str[i];
		if (ch == '\0') break;
		putchar(ch);
		i++;
	}
}