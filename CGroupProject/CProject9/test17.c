#include <stdio.h>

void main() {

	char str[80];
	int ch;
	int i = 0;

	while (1)
	{
		printf("���ڿ��� �Է��ϼ���(����� ����):");
		ch = getchar();
		if (ch == '\n') break;
		str[0] = ch;

		i = 1;
		while (1) {
			ch = getchar();
			if (ch == '\n') break;
			str[i] = ch;
			i++;
		}
		printf("i:%d", i);
		str[i] = '\0';
		printf("�Էµ� ���ڿ� : %s\n", str);
	}
}