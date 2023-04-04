#include <stdio.h>
#include <string.h>

void main() {
	
	char str1[80] = "Long time no see";
	char str2[80] = "what's up?";

	if (strlen(str1) > strlen(str2)) {
		printf("%s", str1);
	}
	else{
		printf("%s", str2);
	}

}