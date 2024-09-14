/*
 * main.c
 *
 *  Created on: Sep 14, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main() {
    char ch;
    char *ptr;

    // Initialize pointer to point to the address of the first character 'A'
    ptr = &ch;

    // Print uppercase alphabets using the pointer
    for (ch = 'A'; ch <= 'Z'; ch++) {
        printf("%c ", *ptr);  // Dereference the pointer to get the value of 'ch'
        fflush(stdout);
    }

    return 0;
}
