#include <stdio.h>

void main() {

	// Stack��   Heap�� �ִ� ������ str1�� �����Ѵ�.
	char str1[] = "My String";

	// Heap�� ���� �ּҸ� str2�� �����Ѵ�.
	char* str2 = "Your String";
	//str2 = "Your String";

	printf("%s %s\n", str1, str2);
	printf("%p %p\n", &str1, str2);

	str2 = "Our String";
	printf("%s %s\n", str1, str2);
	printf("%p %p\n", &str1, str2);

	// ����� Stack������ [0]��° ��Ҹ� �����Ѵ�.
	str1[0] = 'X';
	printf("%s %s\n", str1, str2);

	// Heap�� ���� ���������� ���� �ٲܼ� ����
	//str2[0] = 'X';
	//printf("%s %s\n", str1, str2);
}