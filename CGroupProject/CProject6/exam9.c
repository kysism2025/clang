#include <stdio.h>

void main() {

	// char�迭 ������ ������ ���ؼ��� '\0'���� ä������ ������ �����Ⱚ�� ��µ��� ����
	// ��, �ʱ�ȭ���� ���� ��� '\0'���� ä������ ����
	// scanf�Լ��� �Է��� �޴� ��� ���ڿ��� ���� �ڵ����� '\0'�� ä����
	char str[50] = "I like C Programming";
	char str2[10];


	printf("string:%s\n", str);
	printf("string:%c\n", str[19]);
	printf("string:%c\n", str[20]);
	printf("string:%c\n", str[21]);

	printf("string:%s\n", str2);

	str[8] = '\0';
	// '\0'�� ó�� ���������� ���ڿ��� �ν��ؼ� ����Ѵ�.
	printf("string:%s\n", str);

	str[6] = '\0';
	// '\0'�� ó�� ���������� ���ڿ��� �ν��ؼ� ����Ѵ�.
	printf("string:%s\n", str);

	str[1] = '\0';
	// '\0'�� ó�� ���������� ���ڿ��� �ν��ؼ� ����Ѵ�.
	printf("string:%s\n", str);


}