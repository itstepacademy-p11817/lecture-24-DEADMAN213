#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

uint8_t numberWords(char* str, char* word) {
	uint8_t num = 0;
	
	while (*str) {
		char* pword = word;
		char* pstr = str;

		while (*pword && *pstr == *pword) {
			pstr++;
			pword++;
		}

		if (!*pword) {
			num++;
		}

		str++;
	}

	return num;
}

int main(void) {
	char str[255] = "";
	char wrd[255] = "";

	printf("Input string: ");
	gets(str);

	printf("Input word: ");
	scanf("%s", wrd);

	printf("String include word \"%s\" %hhu times.\n", wrd, numberWords(str, wrd));

	return 0;
}