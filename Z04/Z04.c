#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>

bool isPolindrom(const char* str) {
	char* pbgn = str;
	char* pend = str + strlen(str) - 1;

	while (pbgn < pend) {
		if (*pbgn++ != *pend--) {
			return false;
		}
	}

	return true;
}

int main(void) {
	char str[255] = "";
	printf("Input string: ");
	gets(str);

	isPolindrom(str) ? printf("Palindrom!\n") : printf("Not a palindrom!\n");

	return 0;
}