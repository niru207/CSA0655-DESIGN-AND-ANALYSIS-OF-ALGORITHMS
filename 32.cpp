#include <stdio.h>

int linear_search(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    printf("Enter a key: ");
    scanf("%d", &key);
    int index = linear_search(arr, n, key);
    if (index!= -1) {
        printf("Key found at index %d\n", index);
    } else {
        printf("Key not found\n");
    }
    return 0;
}
