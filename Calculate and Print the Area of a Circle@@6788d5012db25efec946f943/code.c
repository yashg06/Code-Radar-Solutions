#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.14;  // Given value of π

    
    scanf("%f", &radius);

    // Calculating area
    area = pi * radius * radius;

    // Printing output
    printf("Area: %.2f\n", area);  // Prints area with 2 decimal places

    return 0;
}
