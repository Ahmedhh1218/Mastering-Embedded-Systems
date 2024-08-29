/*
 * main.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ahmed
 */


#include <stdio.h>
#include <string.h>

int main() {
	char str[100], ch;
	int i, frequency = 0;

	printf("Enter a string: ");
	fflush(stdout); fflush(stdin);
	fgets(str, sizeof(str), stdin);

	printf("Enter a character to find frequency: ");
	fflush(stdout); fflush(stdin);
	scanf("%c", &ch);

	for(i = 0; i < strlen(str); i++) {
		if(str[i] == ch) {
			frequency++;
		}
	}

	printf("Frequency of %c = %d\n", ch, frequency);

	return 0;
}
