#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int n, int i) {
    // Base cases
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    }
    if (n % i == 0) {
        return 0;
    }
    if (i * i > n) {
        return 1;
    }
    // Recursive case
    return isPrime(n, i + 1);
}

// Recursive function to generate prime numbers up to a given limit
void generatePrimes(int current, int limit) {
    // Base case
    if (current > limit) {
        return;
    }
    // Check if the current number is prime
    if (isPrime(current, 2)) {
        printf("%d ", current);
    }
    // Recursive case
    generatePrimes(current + 1, limit);
}

int main() {
    int limit;
    // Input limit from the user
    printf("Enter the limit: ");
    scanf("%d", &limit);
    // Generate prime numbers up to the limit
    printf("Prime numbers up to %d are: ", limit);
    generatePrimes(2, limit);
    return 0;
}

