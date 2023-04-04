#include <stdio.h>

void main() {
	
	// call by value     : 값을 넘겨주는 방법
	// call by reference : 주소를 넘겨주는 방법

	int a = 10;
	a = add_ten(a);
	printf("a :%d\n", a);

}

int add_ten(int a) {
	a = a + 10;
	return a;
}