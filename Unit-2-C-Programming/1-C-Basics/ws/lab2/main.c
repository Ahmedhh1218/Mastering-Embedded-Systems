/*
 * main.c
 *
 *  Created on: Aug 26, 2024
 *      Author: ahmed
 */

#include <stdio.h>

int main() {
    float num1, num2, num3, largest;

    // Prompt the user to enter three numbers
    printf("Enter the first number: ");
    fflush(stdout);
    scanf("%f", &num1);

    printf("Enter the second number: ");
    fflush(stdout);
    scanf("%f", &num2);

    printf("Enter the third number: ");
    fflush(stdout);
    scanf("%f", &num3);

    // Determine the largest value
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Print the largest value
    printf("The largest number is: %.2f\n", largest);
    fflush(stdout);

    return 0;
}
