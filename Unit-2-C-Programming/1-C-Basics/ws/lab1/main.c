/*
 * main.c
 *
 *  Created on: Aug 26, 2024
 *      Author: ahmed
 */

#include <stdio.h>

#define PI 3.14159

int main() {
    char choice;
    float radius, area, circumference;

    printf("Enter the radius of the circle: ");
    fflush(stdout);
    scanf("%f", &radius);

    printf("Enter 'a' to calculate the area or 'c' to calculate the circumference of the circle: ");
    fflush(stdout);
    scanf(" %c", &choice);

    // Calculate and print the result based on the choice
    if (choice == 'a' || choice == 'A') {
        area = PI * radius * radius;
        printf("The area of the circle is: %.2f\n", area);
    } else if (choice == 'c' || choice == 'C') {
        circumference = 2 * PI * radius;
        printf("The circumference of the circle is: %.2f\n", circumference);
    } else {
        printf("Error: Invalid input.\n");
    }

    return 0;
}
