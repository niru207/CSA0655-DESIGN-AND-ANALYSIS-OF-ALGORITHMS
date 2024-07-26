#include <stdio.h>

void factors(int n, int i) {
    if (i > n) {
        return;
    } else if (n % i == 0) {
        printf("%d ", i);
        factors(n, i+1);
    } else {
        factors(n, i+1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Factors of %d: ", n);
    factors(n, 1);
    printf("\n");
    return 0;
}
