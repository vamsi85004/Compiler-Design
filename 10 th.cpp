#include <stdio.h>
#include <string.h>

// Function to check if string contains "101" using strstr function
int containsSubstring101(char *str) {
    // Check if "101" is a substring of str
    if (strstr(str, "101") != NULL) {
        return 1; // substring found
    } else {
        return 0; // substring not found
    }
}

int main() {
    char str[100]; // Assuming input string length <= 100

    // Get input string from user
    printf("Enter a string: ");
    scanf("%99s", str); // Reading string, limiting to 99 characters to avoid buffer overflow

    // Check if the string contains "101"
    if (containsSubstring101(str)) {
        printf("The string \"%s\" contains the substring \"101\".\n", str);
    } else {
        printf("The string \"%s\" does not contain the substring \"101\".\n", str);
    }

    return 0;
}

