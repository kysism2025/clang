#include <stdio.h>


void exchange(int* cheoli, int* metel);

void main() {

	int cheoli = 10, metel = 20;
	printf("함수가 호출되기 전에 cheoli에 저장된 값: %d\n", cheoli);
	printf("함수가 호출되기 전에 metel 에 저장된 값: %d\n", metel);

	exchange(&cheoli, &metel);
	printf("함수가 호출된 후에 cheoli에 저장된 값: %d\n", cheoli);
	printf("함수가 호출된 후에 metel 에 저장된 값: %d\n", metel);

	char ment[] = "CProg";
	printf("값확인: %s\n", ment);
	printf("값확인: %c\n", *ment);
	printf("값확인: %c\n", *(ment + 1));
	printf("값확인: %c\n", *(ment + 2));
	printf("값확인: %c\n", *(ment + 3));
	printf("값확인: %c\n", *(ment + 4));
	printf("값확인: %c\n", *(ment + 5));
}

void exchange(int *cheoli, int *metel) {
	int temp;

	temp = *cheoli;
	*cheoli = *metel;
	*metel = temp;
}