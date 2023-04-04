#include <stdio.h>

// 열거형
enum season{SPRING, SUMMER, AUTUMN, WINTER};

struct ABC {
	int a;
};

int main() {

	struct ABC abc = { 0 };
	enum season ss;
	char* p = NULL;

	ss = SPRING;
	switch (ss) {
	case SPRING:
		p = "inline";
		break;
	case SUMMER:
		p = "swimming";
		break;
	case AUTUMN:
		p = "climbing";
		break;
	default:
		p = "skiing";
		break;
	}

	printf("나의레저활동 ==> %s\n", p);
	printf("%d", abc.a);
	
}
