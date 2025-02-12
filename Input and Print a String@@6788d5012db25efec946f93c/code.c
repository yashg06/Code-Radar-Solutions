#include <stdio.h>

int main() {
    char str[100]; // Declare a character array to store the input string

    fgets(str, sizeof(str), stdin); // Read input string including spaces

    printf("You entered: %s", str);
    return 0;
}
