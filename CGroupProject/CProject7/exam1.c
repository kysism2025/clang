#include <stdio.h>

void main() {

	char ch = 0;
	int num = 0;
	int adr = 0;

	// & : �ּҿ�����.
	printf("ch�� ������ :%d\n", &ch); // 10����(������)
	printf("ch�� ������ :%u\n", &ch); // ��ȣ���� 10����
	printf("ch�� ������ :%x\n", &ch); // 16����
	printf("num�� ������ :%x\n", &num); // 16����

	adr = &num; // �ּҰ��� �Ϲݺ����� ���尡��
	printf("adr = %x",adr);

}

