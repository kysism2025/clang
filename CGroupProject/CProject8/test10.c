#include <stdio.h>

void main() {

	char str[64];

	while (1) {
		printf("�Է� (����� exit��� �Է�) : ");
		gets_s(str, sizeof(str));

		printf("�񱳰��:%d", strcmp(str, "exit"));

		if (!strcmp(str, "exit")) break;
		printf("�Է°� Ȯ��: %s\n", str);
	}
}