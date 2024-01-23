#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// Function to check if a string is palindrome
bool isPalindrome(const char *str) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < j; ++i, --j) {
        if (str[i] != str[j]) {
            return false; // Not a palindrome
        }
    }

    return true; // Palindrome
}

int main() {
    char inputString[100];

    // Take input from the user
    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    // Remove the newline character at the end of the string
    inputString[strcspn(inputString, "\n")] = '\0';

    // Check if the entered string is a palindrome
    if (isPalindrome(inputString)) {
        printf("%s is a palindrome.\n", inputString);
    } else {
        printf("%s is not a palindrome.\n", inputString);
    }

    return 0;
}