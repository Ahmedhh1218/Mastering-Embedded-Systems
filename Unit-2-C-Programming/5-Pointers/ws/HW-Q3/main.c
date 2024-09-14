/*
 * main.c
 *
 *  Created on: Sep 14, 2024
 *      Author: ahmed
 */


#include <stdio.h>

void printReverse(char *str) {
    char *ptr = str;

    while (*ptr != '\0') {
        ptr++;
    }

    ptr--;

    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--;
    }
    printf("\n");
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fflush(stdout); fflush(stdin);
    fgets(str, sizeof(str), stdin);

    printf("Reversed string: ");
    printReverse(str);

    return 0;
}
