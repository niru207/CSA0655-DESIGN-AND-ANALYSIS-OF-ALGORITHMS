#include <stdio.h>

int isPrime(int num, int i) {
    if (i == 1) {
        return 1; 
    } else {
        if (num % i == 0) {
            return 0; 
        } else {
            return isPrime(num, i - 1); 
        }
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("Enter a number greater than 1.\n");
        return 1;
    }

    if (isPrime(num, num / 2) == 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
