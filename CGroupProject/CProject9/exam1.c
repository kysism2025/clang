#include <stdio.h>

void main() {
	
	char* fruit = "strawberry";
	int i = 0, j = 0;
	int len = strlen(fruit);
	
	for (i = 0; i < len; i++) {
		for (j = i; j < len; j++) {
			printf("%c", *(fruit + j));
		}
		printf("\n");
	}

	i = j = 0;
	while (*(fruit + i) != '\0') {
		for (j = i; j < len; j++) {
			printf("%c", *(fruit + j));
		}
		printf("\n");
		i++;
	}

	i = 0;
	while (*(fruit + i) != '\0') {
		j = i;
		while (j < len) {
			printf("%c", *(fruit + j));
			j++;
		}
		printf("\n");
		i++;
	}

	i = 0;
	while (*(fruit + i) != '\0') {
		printf("%s\n", fruit++);
	}

}