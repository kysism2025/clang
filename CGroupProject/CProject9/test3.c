#include <stdio.h>
#include <Windows.h>

void goto_xy(int x, int y);

void main() {

	char* name;
	name = "Hong gildong";
	goto_xy(0, 2);
	printf("�̸� : %s\n", name);
	printf("������° ���� : %c\n", *(name + 5));
	printf("������° ���� : %c\n", name[5]);
}


void goto_xy(int x, int y) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); // �ڵ�����
	COORD pos; // Ŀ�� ��ġ����
	pos.X = x;
	pos.Y = y;
	SetConsoleCursorPosition(handle, pos);
}