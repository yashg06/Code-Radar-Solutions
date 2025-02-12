#include <stdio.h>

int main() {
    int num1, num2, num3;
    double average;

    
    scanf("%d %d %d", &num1, &num2, &num3);

    // Calculating average
    average = (num1 + num2 + num3) / 3.0;  // Use 3.0 to ensure floating-point division

    // Printing output
    printf("Average :%.2lf\n", average);  // Prints average with 2 decimal places

    return 0;
}
