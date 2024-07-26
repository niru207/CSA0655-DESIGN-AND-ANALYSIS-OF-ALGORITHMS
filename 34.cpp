#include <stdio.h>

void insert(int arr[], int *n, int key) {
    arr[(*n)++] = key;
}

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int key;
    printf("Enter a key: ");
    scanf("%d", &key);
    insert(arr, &n, key);
    printf("Updated list: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
