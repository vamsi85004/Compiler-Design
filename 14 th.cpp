#include <stdio.h>
#include <string.h>

// Function to check if string length is divisible by 3 using regular expression
int isDivisibleBy3(char *str) {
    // Check if the string matches the pattern ([ab]{3})*
    int len = strlen(str);
    return (len % 3 == 0 && strspn(str, "ab") == len);
}

int main() {
    char str[100]; // Assuming input string length <= 100

    // Get input string from user
    printf("Enter a string over {a, b}: ");
    scanf("%99s", str); // Reading string, limiting to 99 characters to avoid buffer overflow

    // Check if the string length is divisible by 3
    if (isDivisibleBy3(str)) {
        printf("The string \"%s\" has a length divisible by 3.\n", str);
    } else {
        printf("The string \"%s\" does not have a length divisible by 3.\n", str);
    }

    return 0;
}

