#include <stdio.h>

struct adress
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};


void main() {
	
	struct adress list[5] = {{"홍길동",20,"010-1111-1111","서울시"},
							 {"김길동",22,"010-2222-2222","김포시"},
							 {"박길동",30,"010-3333-3333","인천시"},
							 {"최길동",25,"010-4444-4444","성남시"},
							 {"왕길동",29,"010-5555-5555","과천시"}};

	int i;

	for (i = 0; i < 5; i++) {
		printf("%10s%5d%15s%20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	

}