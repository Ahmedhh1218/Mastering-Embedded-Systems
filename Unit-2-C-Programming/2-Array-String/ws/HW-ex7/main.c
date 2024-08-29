/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */


#include <stdio.h>

int main() {
	char str[100];
	int length = 0;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	fgets(str, sizeof(str), stdin);

	while (str[length] != '\0') {
		length++;
	}

	if (str[length - 1] == '\n') {
		length--;
	}

	printf("Length of string is: %d\n", length);

	return 0;
}
