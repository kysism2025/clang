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

	// *pnData = 20 (O)  ������ �ּ��� ���� �ٲ�
	//  pnData = 20 (X)  �ּ���ü�� �ٲ�
	//  ����   = *pnData ����Ű�� ���� ���� ������ ����
}