#include <stdio.h>
#include <malloc.h>
#include <string.h>
#include <stdlib.h>

struct cracker
{
	int price;
	int calories;
	char *name;
};

void main() {

	struct cracker basasak;
	//char temp[32];

	basasak.name = (char*)malloc(30);

	printf("바사삭의 가격과 열량을 입력하세요 : ");
	scanf_s("%d", &basasak.price);
	scanf_s("%d", &basasak.calories);
	scanf_s("%s", basasak.name, 30);
	//scanf_s("%s", temp, 32); // 직접 HEAP에 저장불가

	//int len = strlen(temp) + 1;
	//basasak.name = (char*)malloc(len);
	//memcpy(basasak.name, temp, len + 1);

	free(basasak.name);
	
	printf("바사삭의 가격:%d원\n", basasak.price);
	printf("바사삭의 열량:%dkal\n", basasak.calories);
	printf("바사삭의 이름:%s\n", basasak.name);
}