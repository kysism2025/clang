#include <stdio.h>

struct profile
{
	int age;
	double height;
	char name[20];
	char* ap;
};

void main() {

	struct profile pf = { 0, };

	pf.age = 10;
	pf.height = 160.5;
	pf.ap = "ȫ�浿";
	strcpy(pf.name, "�̼���");

	printf("%d\n", pf.age);
	printf("%.1lf\n", pf.height);
	printf("%s\n", pf.name);
	printf("%s\n", pf.ap);
}
