#include <stdio.h>

void main() {

	int i;
	//char word[80] = "            ";
	char word[100000];
	printf("�ܾ �Է��ϼ��� :");

	// word�տ� &�� ������ �ʴ� ������ �迭�� ������ó�� �ּҸ� ��� �����Ƿ�
	//scanf_s("%s", word, 80); // ���ڿ��� �ڵ����� �־���
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
	
	//printf("%s�ܾ��� ���̴� %d���Դϴ�.\n", word, i);
	printf("%s\n", word);
}