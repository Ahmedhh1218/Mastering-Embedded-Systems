/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: ahmed
 */


#include <stdio.h>
#define PI 3.14
#define AREA(r) (PI * (r) * (r))

int main() {
    float radius, area;

    printf("Enter the radius: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &radius);

    area = AREA(radius);

    printf("Area=%.2f\n", area);

    return 0;
}
