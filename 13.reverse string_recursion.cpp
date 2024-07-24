#include <stdio.h>
#include <string.h>

void reverseString(char str[], int start, int end) {
    // Base case: if the start index is greater than or equal to the end index
    if (start >= end) {
        return;
    }
    // Swap the characters at the start and end indices
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    // Recursive call for the next pair of characters
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];
    // Input string from user
    printf("Enter a string: ");
    scanf("%s", str);
    // Call recursive function to reverse the string
    reverseString(str, 0, strlen(str) - 1);
    // Output the reversed string
    printf("Reversed String = %s\n", str);
    return 0;
}

