#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

void insertCharacter(char* str, char ch, uint8_t pos) {
	char* pstr = str + pos - 1;
	char* pbgn = pstr;

	while (*pstr) {
		char box = *(pstr + 1);
		*(pstr + 1) = *pbgn;
		*pbgn = box;
		pstr++;
	}
	*pbgn = ch;
}

int main(void) {
	char str[255] = "";
	char ch = 0;
	uint8_t num = 0;

	printf("Input string: ");
	gets(str);

	printf("Input symbol: ");
	scanf("%c", &ch);

	printf("Input position: ");
	scanf("%hhu", &num);

	insertCharacter(str, ch, num);

	printf("String: ");
	puts(str);

	return 0;
}