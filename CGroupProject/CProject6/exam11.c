#include <stdio.h>

void main() {

	char str1[] = "There is no royal road to learning C.";
	char str2[80];
	int i;
	int size, size2;

	size = sizeof(str1);
	for (i = 0; i < size; i++) {
		str2[i] = str1[i];
	}

	size2 = sizeof(str2);
	 for(i=0;i<size2;i++){
		 if (str2[i] != '0') {
			 printf("문자 : %c\n", str2[i]);
		 }
	 }

	printf("마지막숫자 : %d\n", i);
	printf("복사된 문자열 : %s\n", str2);
}