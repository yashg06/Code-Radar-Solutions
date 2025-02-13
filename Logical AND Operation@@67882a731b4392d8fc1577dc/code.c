#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input
    scanf("%d %d", &num1, &num2);

    // Checking if both numbers are greater than zero using multiplication
    if (num1 * num2 > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
