#include <stdio.h>

void main() {

	char ch = 0;
	int num = 0;
	int adr = 0;

	// & : 주소연산자.
	printf("ch의 포인터 :%d\n", &ch); // 10진수(정수형)
	printf("ch의 포인터 :%u\n", &ch); // 부호없는 10진수
	printf("ch의 포인터 :%x\n", &ch); // 16진수
	printf("num의 포인터 :%x\n", &num); // 16진수

	adr = &num; // 주소값은 일반변수에 저장가능
	printf("adr = %x",adr);

}

