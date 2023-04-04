#include <stdio.h>
#include <string.h>

void main() {

	
    char str[] = "BlockDMask Blog is good";
    char* ptr = strchr(str, 'o');

    while (ptr != NULL) {
		printf("찾는 문자: %c, 찾은 문자열 : %s\n", *ptr, ptr);
		ptr = strchr(ptr + 1, 'o');
    }
	

	int ary[5] = { 10, 20, 30, 40, 50 };

    // *, &만 사용하여 모든 값 찍기
	for (int i = 0; i < 5; i++) {
		//printf("값:%d", *(ary + i));
		//printf("값:%d", *&ary[i]);
		printf("배열값[%d]:%d\n", i, *(&ary[0] + i));
	}


}