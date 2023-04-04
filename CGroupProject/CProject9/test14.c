#include <stdio.h>
#include <string.h>

void main() {

	char name[80] = { 0 };
	char tel[80] = { 0 };
	char addr[100] = { 0 };
	char person_info[800] = { 0 }; // 반드시 초기화

	printf("이름을 입력하세요 : ");
	gets(name); // NULL문자('\0')를 자동으로 붙여줌
	strcat_s(person_info, sizeof(person_info), name);
	strcat_s(person_info, sizeof(person_info), ", ");

	printf("전화번호를 입력하세요 : ");
	gets(tel);
	strcat_s(person_info, sizeof(person_info), tel);
	strcat_s(person_info, sizeof(person_info), ", ");

	printf("주소를 입력하세요 : ");
	gets(addr);
	strcat_s(person_info, sizeof(person_info), addr);

	puts(person_info);
}