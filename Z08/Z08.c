#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

void replaceCharacter(char* str, char old, char new) {
	while (*str) {
		if (*str == old) {
			*str = new;
		}
		str++;
	}
}

int main(void) {
	char str[255] = "";

	printf("Input string: ");
	gets(str);

	replaceCharacter(str, '.', '!');

	printf("String: ");
	puts(str);

	return 0;
}