#include <stdio.h>
#include <string.h>

// Function to check if string matches the regular expression
int matchesRegularExpression(char *str) {
    int i = 0;
    int len = strlen(str);

    while (i < len) {
        if (str[i] == '0') {
            // Check if '0' is preceded by '1'
            if (i == 0 || str[i - 1] != '1') {
                return 0; // Invalid pattern found
            }
            i++;
        } else if (str[i] == '1') {
            i++;
        } else {
            return 0; // Invalid character found
        }
    }

    return 1; // String matches the regular expression
}

int main() {
    char str[100]; // Assuming input string length <= 100

    // Get input string from user
    printf("Enter a string over {a, b}: ");
    scanf("%99s", str); // Reading string, limiting to 99 characters to avoid buffer overflow

    // Check if the string matches the regular expression
    if (matchesRegularExpression(str)) {
        printf("The string \"%s\" matches the regular expression.\n", str);
    } else {
        printf("The string \"%s\" does not match the regular expression.\n", str);
    }

    return 0;
}

