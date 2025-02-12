#include <stdio.h>

int main() {
    double num;


    scanf("%lf", &num);  // %lf is used for double

    // Printing output
    printf("You entered: %.4lf\n", num);

    return 0;
}
