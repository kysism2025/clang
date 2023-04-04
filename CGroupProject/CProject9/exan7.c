#include <stdio.h>
#include <string.h>

void swap_string(char* s1, char* s2);

void main() {

	// ���ڿ� ó�� �Լ�(���̺귯�� �Լ�)
	// string copy, string length, string compare, string concatenation

	// --------------
	// string copy
	// --------------
	char str1[20] = "apple";
	char str2[20] = "banana";
	//char temp[20];
	printf("������ str1:%s\n", str1);
	printf("������ str2:%s\n", str2);

	swap_string(str1, str2);
	/*
	*/

	printf("������ str1:%s\n", str1);
	printf("������ str2:%s\n", str2);

	//free(str1);
	//free(str2);
	// --------------
	// string copy
	// --------------
	printf("���ڿ��Ǳ��� str1:%d\n", strlen(str1));
	printf("���ڿ��Ǳ��� str2:%d\n", strlen(str2));

	// --------------
	// string compare
	// --------------
	if (strcmp(str1, str2) == 1) {
		printf("str1�� ascii�ڵ� ���� Ů�ϴ�.\n");
	}
	else if (strcmp(str1, str2) == -1) {
		printf("str2�� ascii�ڵ� ���� Ů�ϴ�.\n");
	}
	else if (strcmp(str1, str2) == 0) {
		printf("str1�� str2�� �����մϴ�.\n");
	}

	// --------------------
	// string concatenation
	// --------------------
	//strcat_s(str1, sizeof(str1), str2);
	//printf("%s\n", str1);
	strncat_s(str1, sizeof(str1), str2, 2);
	printf("%s\n", str1);
}

void swap_string(char* s1, char* s2) {

	char temp[20];
	int i = 0, j = 0, k =0;

	/*
	strcpy_s(temp, 20, s1);
	strcpy_s(s1, 20, s2);
	strcpy_s(s2, 20, temp);
	*/

	while (1) {
		*(temp + i) = *(s2 + i);
		if (*(s2 + i) == '\0') break;
		i++;
	}
	//printf("temp::%s\n", temp);

	while (1) {
		*(s2 + j) = *(s1 + j);
		if (*(s1 + j) == '\0') break;
		j++;
	}
	//printf("s2::%s\n", s2);

	while (1) {
		
		*(s1 + k) = *(temp + k);
		if (*(temp + k) == '\0') break;
		k++;
	}
	//printf("s1::%s\n", s1);

}
