#include <stdio.h>

int main() {
    int num;

    // Taking input
    scanf("%d", &num);

    // Checking if the number is not greater than zero using '!'
    if (!(num > 0)) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;
}
