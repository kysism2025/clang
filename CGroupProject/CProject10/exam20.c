#include <stdio.h>
#include <stdlib.h>

struct score
{
	int kor, eng, mat;
};

void main() {
	struct score a = { 90, 80, 70 };
	struct score* sp = &a;

	// �������� (*����ü������ ����).
	printf("����:%d\n", (*sp).kor);
	printf("����:%d\n", (*sp).eng);
	printf("����:%d\n", (*sp).mat);

	// ����������������� ->
	printf("����:%d\n", sp->kor);
	printf("����:%d\n", sp->eng);
	printf("����:%d\n", sp->mat);

}