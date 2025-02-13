#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    
    // Perform bitwise OR operation
    int result = a | b;
    
    // Print the result
    printf("%d\n", result);
    
    return 0;
}