#include <stdio.h>

void main() {
	
	// 문자열은 배열의 형태로 구현되어 있다.
	char str[80] = "dream";
	
	// "dream" ==> | d | r | e | a | m | '\0' |
	// str[80] ==> | d | r | e | a | m | '\0' | '\0' | ........ |

	int count = 0;
	int i = 0;

	while (*(str+ i) != '\0') {
		count++;
		i++;
	}

	printf("배열에 저장된 문자열의 길이 : %d\n", count);
}


