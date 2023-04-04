#include <stdio.h>

struct point
{
	int xpos;
	int ypos;
};

typedef struct person {
	char name[20];
	char phoneNumber[20];
	int age;
} Person;

void main() {
	
	typedef struct point Point;
	Point pos = { 10, 20 };
	Person man = { "ȫ�浿", "010-1111-1111", 21 };

	printf("%d,%d\n", pos.xpos, pos.ypos);
	printf("%s,%s,%d\n", man.name, man.phoneNumber, man.age);

}
