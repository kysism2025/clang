#include <stdio.h>

void main() {
	
	// ���ڿ��� �迭�� ���·� �����Ǿ� �ִ�.
	char str[80] = "dream";
	
	// "dream" ==> | d | r | e | a | m | '\0' |
	// str[80] ==> | d | r | e | a | m | '\0' | '\0' | ........ |

	int count = 0;
	int i = 0;

	while (*(str+ i) != '\0') {
		count++;
		i++;
	}

	printf("�迭�� ����� ���ڿ��� ���� : %d\n", count);
}


