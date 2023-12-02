#include <iostream>
#include <cstring>

int main() {
    // Find the length of a string
    const char *str1 = "Hello, World!";
    std::cout << "Length of str1: " << strlen(str1) << std::endl;

    // Compare two strings
    const char *str2 = "Hello, Universe!";
    int compareResult = strcmp(str1, str2);
    if (compareResult == 0) {
        std::cout << "str1 and str2 are equal." << std::endl;
    } else if (compareResult < 0) {
        std::cout << "str1 comes before str2." << std::endl;
    } else {
        std::cout << "str1 comes after str2." << std::endl;
    }

    // Concatenate two strings
    char concatenatedStr[50];
    strcpy(concatenatedStr, str1);
    strcat(concatenatedStr, " ");
    strcat(concatenatedStr, str2);
    std::cout << "Concatenated string: " << concatenatedStr << std::endl;

    // Reverse a string
    char originalStr[] = "abcdef";
    char reversedStr[50];
    int len = strlen(originalStr);
    for (int i = 0; i < len; i++) {
        reversedStr[i] = originalStr[len - 1 - i];
    }
    reversedStr[len] = '\0';
    std::cout << "Reversed string: " << reversedStr << std::endl;

    // Copy a string to another location
    char copiedStr[50];
    strcpy(copiedStr, originalStr);
    std::cout << "Copied string: " << copiedStr << std::endl;

    return 0;
}
