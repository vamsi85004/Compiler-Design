#include <stdio.h>
#include <string.h>

// Function to check if string is of odd length using regular expression
int isOddLength(char *str) {
    // Check if the string matches the pattern (a|b)(aa|bb|ab|ba)*
    return (strlen(str) % 2 != 0 && strspn(str, "ab") == strlen(str));
}

int main() {
    char str[100]; // Assuming input string length <= 100

    // Get input string from user
    printf("Enter a string over {a, b}: ");
    scanf("%99s", str); // Reading string, limiting to 99 characters to avoid buffer overflow

    // Check if the string is of odd length
    if (isOddLength(str)) {
        printf("The string \"%s\" is of odd length.\n", str);
    } else {
        printf("The string \"%s\" is not of odd length.\n", str);
    }

    return 0;
}

