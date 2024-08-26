/*
 * main.c
 *
 *  Created on: Aug 26, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main() {
    int start, end, sum = 0;

    // Prompt the user for the start and end values of the range
    printf("Enter the start value of the range: ");
    fflush(stdout);
    scanf("%d", &start);

    printf("Enter the end value of the range: ");
    fflush(stdout);
    scanf("%d", &end);

    // Validate the input range
    if (start > end) {
        printf("Error: Start value should be less than or equal to end value.\n");
        return 1;
    }

    // Calculate the summation of values in the range
    for (int i = start; i <= end; i++) {
        sum += i;
    }

    // Print the result
    printf("The summation of values between %d and %d is: %d\n", start, end, sum);
    fflush(stdout);

    return 0;
}

