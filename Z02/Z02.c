#include <stdio.h>
#include <inttypes.h>
#include <string.h>
#include <ctype.h>

void countCharacters(char* str, uint8_t* letters, uint8_t* nums, uint8_t* all) {
	while (*str) {
		(*all)++;
		if (isalpha(*str)) {
			(*letters)++;
		}
		if (isdigit(*str)) {
			(*nums)++;
		}
		str++;
	}
}

int main(void) {
	uint8_t nums = 0;
	uint8_t letters = 0;
	uint8_t all = 0;
	char str[255] = "";
	printf("Input string: ");
	gets(str);

	countCharacters(str, &letters, &nums, &all);

	printf("Numbers: %3hhi.\nLetters: %3hhi.\nOther: %3hhi.\n", nums, letters, all - nums - letters);

	return 0;
}