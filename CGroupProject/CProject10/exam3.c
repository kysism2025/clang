#include <stdio.h>

void main() {
	
	// call by value     : ���� �Ѱ��ִ� ���
	// call by reference : �ּҸ� �Ѱ��ִ� ���

	int a = 10;
	a = add_ten(a);
	printf("a :%d\n", a);

}

int add_ten(int a) {
	a = a + 10;
	return a;
}