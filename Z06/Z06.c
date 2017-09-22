#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

void delSymbol(char* pos) {
	while (*pos) {
		*pos = *(pos + 1);
		pos++;
	}
}

void stringMod(char* str, char ch) {
	while (*str) {
		if (*str == ch) {
			delSymbol(str);
		}
		else {
			str++;
		}
	}
}

int main(void) {
	char str[255] = "";
	char ch = 0;
	printf("Input string: ");
	gets(str);
	printf("Input symbol: ");
	scanf("%c", &ch);

	stringMod(str, ch);

	printf("String: ");
	puts(str);

	return 0;
}