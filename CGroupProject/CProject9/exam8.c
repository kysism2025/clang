#include <stdio.h>
#include <malloc.h>

void main() {
	
	char fruit[80] = "apple";
	char* fruit2 = "banana";
	int len1, len2;

	len1 = strlen(fruit);  // null����
	len2 = strlen(fruit2);  // null����
	printf("���ڿ�1�� ����:%d\n", len1);
	printf("���ڿ�2�� ����:%d\n", len2);


	char* p_name;
	p_name = (char*)malloc(32);
	if (p_name != NULL) {

		printf("Your name : ");
		gets(p_name);

		printf("�Էµ� ��:%s", p_name);
		free(p_name);
	}
	else {
		printf("�޸� �Ҵ翡 ����");
	}
}