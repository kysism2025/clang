#include <stdio.h>

void main() {

	char word[80];
	int i = 0;
	int count = 0;

	printf("�ܾ �Է��ϼ���:");
	scanf_s("%s", word, 80);

	while (1) {
		if (word[count] == '\0') break;
		count++;
	}
	// ���
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

	printf("�Էµ� �ܾ�: %s\n", word);
	printf("\n�Էµ� �ܾ��: %d\n", count);

	printf("�ܾ ��������1:");

	for (i = count - 1; i >= 0; i--) {
		printf("%c", word[i]);
	}

	printf("\n�ܾ ��������2:");

	// ���ڿ��� ����ϴ� �Լ� puts()
	puts(word);

}