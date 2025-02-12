#include <stdio.h>

int main() {
    float num1, num2, product;


    scanf("%f %f", &num1, &num2);

    // Calculating product
    product = num1 * num2;

    // Printing the product
    printf("Product: %.2f\n", product);

    return 0;
}
