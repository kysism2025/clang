#include <stdio.h>

void main() {
	
	// 지역변수는 함수가 리턴되고 나면 메모리에서 사라진다.
	
	// 전역변수
	int a = 10, b = 20; 

	printf("바꾸기 전 a :  %d, b: %d \n", a, b);
	{
		int a = 30, b = 40;
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("바꾼후 a :  %d, b: %d\n", a, b);
	// printf("%d\n", temp); 오류발생(지역변수를 출력하려고 했기때문)
}