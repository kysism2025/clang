#include <stdio.h>
#include <string.h>

void main() {

	
    char str[] = "BlockDMask Blog is good";
    char* ptr = strchr(str, 'o');

    while (ptr != NULL) {
		printf("ã�� ����: %c, ã�� ���ڿ� : %s\n", *ptr, ptr);
		ptr = strchr(ptr + 1, 'o');
    }
	

	int ary[5] = { 10, 20, 30, 40, 50 };

    // *, &�� ����Ͽ� ��� �� ���
	for (int i = 0; i < 5; i++) {
		//printf("��:%d", *(ary + i));
		//printf("��:%d", *&ary[i]);
		printf("�迭��[%d]:%d\n", i, *(&ary[0] + i));
	}


}