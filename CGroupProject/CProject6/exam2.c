#include <stdio.h>

int main() {

	int anData[4] = { 1,2,3,4 };
	int i;
	int anData2[4] = { 1, 2 };

	for (i = 0; i < 4; i++) {
		printf("%d\n", anData[i]);
	}

	// ���� �Ϳ� ���ؼ��� 0���� ǥ�õ�!!!
	for (i = 0; i < 4; i++) {
		printf("%d\n", anData2[i]);
	}

	return 0;
}