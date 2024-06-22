#include <stdio.h>
#include <string.h>

// Function to check if string contains at least two consecutive 0's or 1's
int containsConsecutiveZerosOrOnes(char *str) {
    // Check if the string matches the pattern (00|11|0{2,}|1{2,})
    if (strstr(str, "00") != NULL || strstr(str, "11") != NULL ||
        strstr(str, "000") != NULL || strstr(str, "111") != NULL) {
        return 1; // pattern found
    } else {
        return 0; // pattern not found
    }
}

int main() {
    char str[100]; // Assuming input string length <= 100

    // Get input string from user
    printf("Enter a string: ");
    scanf("%99s", str); // Reading string, limiting to 99 characters to avoid buffer overflow

    // Check if the string contains at least two consecutive 0's or 1's
    if (containsConsecutiveZerosOrOnes(str)) {
        printf("The string \"%s\" contains at least two consecutive 0's or 1's.\n", str);
    } else {
        printf("The string \"%s\" does not contain at least two consecutive 0's or 1's.\n", str);
    }

    return 0;
}

