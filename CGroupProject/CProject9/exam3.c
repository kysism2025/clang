#include <stdio.h>

void main() {

	// char a [] = "S"  ==> | S | '\0' | ==> 2 byte
	// char a = 'S'     ==> | S | ==> 1 byte

	int age;
	char* greeting;

	printf("���̸� �Է��ϼ��� : ");
	scanf_s("%d", &age);

	if (age > 30) {
		// "ó�� �˰ڽ��ϴ�."
		greeting = "ó�� �˰ڽ��ϴ�.";
	}
	else {
	
		// "�ݰ�����"
		greeting = "�ݰ�����";
	}
	printf("�λ縻:%s\n", greeting);
	printf("�λ縻:%p\n", greeting);
	greeting = "abcdefg";
	printf("�λ縻:%s\n", greeting);
	printf("�λ縻:%p\n", greeting);

	greeting[0] = 'x'; // Heap������ ���� �Ұ� �Ʒ� ����ȵ�!
	printf("�λ縻:%s\n", greeting);

}