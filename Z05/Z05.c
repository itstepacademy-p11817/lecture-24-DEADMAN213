#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

void delChar(char* str, char num) {
	char* pstr = str + num - 1;

	while (*pstr) {
		*pstr = *(pstr + 1);
		pstr++;
	}
}

int main(void) {
	char str[255] = "";
	uint8_t num = 0;
	printf("Input string: ");
	gets(str);

	printf("Input number of symbol: ");
	scanf("%hhu", &num);

	delChar(str, num);

	printf("Your string after deleting character number %hhu: %s\n", num, str);

	return 0;
}