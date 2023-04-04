#include <stdio.h>

typedef struct personinfo {
	char name[20];
	char phoneNumber[20];
	int age;
} Person;

// 출력용
void ShowPersonInfo(Person man) {
	printf("%s\n", man.name);
	printf("%s\n", man.phoneNumber);
	printf("%d\n", man.age);
}

// 입력용
Person ReadPersonInfo() {

	Person man;
	printf("name?");
	scanf_s("%s", man.name, 20);
	printf("phone?");
	scanf_s("%s", &man.phoneNumber, 20);
	printf("age?");
	scanf_s("%d", &man.age);

	return man;
}

void main() {
	
	Person man = ReadPersonInfo();
	ShowPersonInfo(man);
}
