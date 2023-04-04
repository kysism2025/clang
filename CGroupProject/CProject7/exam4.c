#include <stdio.h>

void main() {

	int nData = 10;
	int *pnData = &nData;
	int pnData2 = &nData;

	printf("%d, %d\n", nData, *pnData);
	printf("%x, %x\n", &nData, pnData);
	//printf("%x, %x\n", &nData, *pnData2);
	printf("%p, %p\n", &nData, pnData); //64 bit
	
	pnData = 20;
	printf("%p\n", pnData); 
	printf("%x\n", *pnData); 

	// *pnData = 20 (O)  지정한 주소의 값을 바꿈
	//  pnData = 20 (X)  주소자체를 바꿈
	//  변수   = *pnData 가르키는 곳의 값을 변수에 대입
}