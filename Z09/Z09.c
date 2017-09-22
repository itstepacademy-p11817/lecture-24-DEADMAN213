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
	uint8_t oldch = 0;
	uint8_t newch = 0;

	printf("Input string: ");
	gets(str);

	printf("Input character to replace: ");
	scanf("%c", &oldch);

	printf("Input new character: ");
	scanf("%*c%c", &newch, &newch);

	replaceCharacter(str, oldch, newch);

	printf("String: ");
	puts(str);

	return 0;
}