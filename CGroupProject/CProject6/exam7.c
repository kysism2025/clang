#include <stdio.h>

void main() {

	//char word[5] = "Love\0";
	char word[5] = {'L','o','v','e','\0'};
	/*
	word[0] = 'L';
	word[1] = 'o';
	word[2] = 'v';
	word[3] = 'e';
	word[4] = '\0';
	*/

	printf("%s\n", word);
	printf("%zd\n", sizeof(char));

	int size = sizeof(word) / sizeof(word[0]);
	for (int i = 0; i < size; i++) {
		printf("%c", word[i]);
	}
}