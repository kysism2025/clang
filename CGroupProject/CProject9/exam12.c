#include <stdio.h>
#include <string.h>

void main() {

	char fruit[80] = "straw";
	strcat_s(fruit, sizeof(fruit), "berry");
	printf("����� ���ڿ� : %s\n", fruit);
}
