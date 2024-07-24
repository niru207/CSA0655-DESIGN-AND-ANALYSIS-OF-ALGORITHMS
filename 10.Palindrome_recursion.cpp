#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(char str[], int start, int end) {

    if (start >= end) {
        return true;
    }


    if (str[start] != str[end]) {
        return false;
    }


    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str, 0, strlen(str) - 1)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
