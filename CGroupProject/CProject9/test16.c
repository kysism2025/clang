#include <stdio.h>

void main() {
	char str[80] = { 0 };
	int ch;
	int i;

	printf("���ڿ��� �Է��ϼ��� : ");
	for (i = 0; i < 4; i++) {
		ch = getchar(); // �ϳ��� ����(NULL���ڸ� �ڵ����� �ٿ����� ����)
		// str[i] = ch;
		*(str + i) = ch;
	}
	str[4] = '\0';
	//printf("�Էµ� ���ڿ� : ");
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