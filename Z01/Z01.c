#include <stdio.h>
#include <inttypes.h>
#include <string.h>

void replaceCharacter(char* str) {
	while (*str) {
		if (*str == ' ') {
			*str = '\t';
		}
		str++;
	}
}

int main(void) {
	char str[255] = "";
	printf("Input string: ");
	gets(str);
	
	replaceCharacter(str);

	printf("String after transformation: %s\n", str);

	return 0;
}