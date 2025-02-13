#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Using ! (logical NOT), * (multiplication), and logical operators
    int result = !((a > 0) * 1) * !((b > 0) * 1);
    
    if (result)
        printf("True\n");
    else
        printf("False\n");
    
    return 0;
}

