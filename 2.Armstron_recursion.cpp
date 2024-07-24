#include <stdio.h>
#include <math.h>


int countDigits(int num) {
    if (num == 0) {
        return 0;
    }
    return 1 + countDigits(num / 10);
}


int isArmstrong(int num, int n) {
    if (num == 0) {
        return 0;
    }
    return pow(num % 10, n) + isArmstrong(num / 10, n);
}

int main() {
    int num, n, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = countDigits(num);
    sum = isArmstrong(num, n);
    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
