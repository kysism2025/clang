#include <stdio.h>
#include <stdlib.h>

struct score
{
	int kor, eng, mat;
};

void main() {
	struct score a = { 90, 80, 70 };
	struct score* sp = &a;

	// 직접참조 (*구조체포인터 변수).
	printf("국어:%d\n", (*sp).kor);
	printf("영어:%d\n", (*sp).eng);
	printf("수학:%d\n", (*sp).mat);

	// 간접멤버참조연산자 ->
	printf("국어:%d\n", sp->kor);
	printf("영어:%d\n", sp->eng);
	printf("수학:%d\n", sp->mat);

}