#include <stdio.h>
#include <string.h>

// Function to check if string is of even length using regular expression
int isEvenLength(char *str) {
    // Check if the string matches the pattern (aa|bb|ab|ba)*
    return (strlen(str) % 2 == 0 && strspn(str, "ab") == strlen(str));
}

int main() {
    char str[100]; // Assuming input string length <= 100

    // Get input string from user
    printf("Enter a string over {a, b}: ");
    scanf("%99s", str); // Reading string, limiting to 99 characters to avoid buffer overflow

    // Check if the string is of even length
    if (isEvenLength(str)) {
        printf("The string \"%s\" is of even length.\n", str);
    } else {
        printf("The string \"%s\" is not of even length.\n", str);
    }

    return 0;
}

