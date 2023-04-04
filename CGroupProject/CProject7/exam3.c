#include <stdio.h>

void main() {

	int a = 10;
	int *ap = &a;  // 선언일 뿐!! ( 나 저장된 주소의 값을 가르킬 주소를 저장할 것이라는 것)

	printf("%d\n", a);   // a값
	printf("%x\n", &a);  // a주소
	printf("%x\n", ap);  // a주소
	printf("%x\n", &ap); // ap의 주소
	printf("%d\n", *ap); // ap에 저장된 주소가 가르키는 곳의 값

}