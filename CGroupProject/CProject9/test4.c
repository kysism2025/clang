#include <stdio.h>

void main() {

	char* str = "watermelon";
	int i = 0, k = 0;
	char str_tmp[10];

	while (str[i] != '\0') {
		
		// 规过1.
		//printf("%c", *(str + i)); //wtreo
		//i += 2;

		// 规过2.
		if (i % 2 == 0) {
			printf("%c", *(str + i));
		}

		// 规过3.
		//if (i % 2 == 0) {
		//	str_tmp[k++] = str[i];
		//}
		i++;
	}
	//str_tmp[k] = '\0';
	//printf("搬苞:%s", str_tmp);
}