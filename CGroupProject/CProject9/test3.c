#include <stdio.h>
#include <Windows.h>

void goto_xy(int x, int y);

void main() {

	char* name;
	name = "Hong gildong";
	goto_xy(0, 2);
	printf("이름 : %s\n", name);
	printf("여섯번째 문자 : %c\n", *(name + 5));
	printf("여섯번째 문자 : %c\n", name[5]);
}


void goto_xy(int x, int y) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); // 핸들지정
	COORD pos; // 커서 위치지정
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}