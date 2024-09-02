/*
 * main.c
 *
 *  Created on: Sep 3, 2024
 *      Author: ahmed
 */


#include <stdio.h>

struct Distance {
    int feet;
    float inches;
};

struct Distance addDistances(struct Distance d1, struct Distance d2) {
    struct Distance result;

    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12.0)
    {
        result.feet = (int)(result.inches / 12);
        result.inches = result.inches - (result.feet * 12);
    }
    else
    {
        result.feet = 0;
    }

    result.feet += d1.feet + d2.feet;

    return result;
}

int main() {
    struct Distance dist1, dist2, sum;

    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &dist1.feet);
    printf("Enter inches: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &dist1.inches);

    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    fflush(stdin); fflush(stdout);
    scanf("%d", &dist2.feet);
    printf("Enter inches: ");
    fflush(stdin); fflush(stdout);
    scanf("%f", &dist2.inches);

    sum = addDistances(dist1, dist2);

    printf("\nSum of distances = %d' %.1f\"\n", sum.feet, sum.inches);

    return 0;
}
