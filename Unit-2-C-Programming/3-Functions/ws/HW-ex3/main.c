/*
 * main.c
 *
 *  Created on: Aug 30, 2024
 *      Author: ahmed
 */


#include <stdio.h>
#include <string.h>

void reverseSentence(char* str, int start, int end) {
    if (start >= end) {
        return;
    }

    // Swap characters at start and end
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseSentence(str, start + 1, end - 1);
}

int main() {
    char str[100];

    printf("Enter a sentence: ");
    fflush(stdout); fflush(stdin);
    gets(str);

    int len = strlen(str);
    reverseSentence(str, 0, len - 1);

    printf("Reversed sentence: %s\n", str);

    return 0;
}
