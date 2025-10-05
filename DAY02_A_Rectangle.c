/* 
Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle 
given its length and breadth.
*/

#include <stdio.h>

int main(void) {
    double length, breadth;
    printf("Enter length and breadth separated by space: ");
    if (scanf("%lf %lf", &length, &breadth) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    double area = length * breadth;
    double perimeter = 2.0 * (length + breadth);

    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}