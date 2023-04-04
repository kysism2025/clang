#include <stdio.h>

void increase();
// (static) int sum = 100;

void main() {
	int i;
	for (i = 0; i < 5; i++) {
		increase();
	}
}

void increase() {
	static int sum = 0;
	sum++;
	printf("sum : %d\n", sum); // 1,2,3,4,5
}


// Stack  : LIFO ( 나중에 만든것이 먼저 없어짐) increase()함수내 int sum = 0;
// Heap   : 계속남아있음
// static : 상주 별도의 공간에 만들어짐 static int sum = 0; ( 한번 정의되면 그것으로 끝나고 다시 초기화되지 않는다. )