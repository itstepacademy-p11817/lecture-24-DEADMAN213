#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

uint8_t countWords(char* str) {
	uint8_t words = 0;
	bool isWord = false;

	while (*str) {
		if (!isWord && isalpha(*str)) {
			isWord = true;
			words++;
		}

		if (isWord && !isalpha(*str)) {
			isWord = false;
		}

		str++;
	}

	return words;
}

int main(void) {
	uint8_t words = 0;
	char str[255] = "";
	
	printf("Input string: ");
	gets(str);

	printf("Words in string: %3hhu.\n", countWords(str));

	return 0;
}