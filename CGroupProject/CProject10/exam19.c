#include <stdio.h>

struct adress
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};


void main() {
	
	struct adress list[5] = {{"ȫ�浿",20,"010-1111-1111","�����"},
							 {"��浿",22,"010-2222-2222","������"},
							 {"�ڱ浿",30,"010-3333-3333","��õ��"},
							 {"�ֱ浿",25,"010-4444-4444","������"},
							 {"�ձ浿",29,"010-5555-5555","��õ��"}};

	int i;

	for (i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	

}