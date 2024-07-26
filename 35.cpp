#include <stdio.h>

void sum_of_subsets(int arr[], int n, int sum, int pos, int curr_sum, int subset[]) {
    if (pos == n) {
        if (curr_sum == sum) {
            printf("Subset found: ");
            for (int i = 0; i < n; i++) {
                if (subset[i]) {
                    printf("%d ", arr[i]);
                }
            }
            printf("\n");
        }
        return;
    }
    subset[pos] = 1;
    if (curr_sum + arr[pos] <= sum) {
        sum_of_subsets(arr, n, sum, pos + 1, curr_sum + arr[pos], subset);
    }
    subset[pos] = 0;
    sum_of_subsets(arr, n, sum, pos + 1, curr_sum, subset);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    printf("Enter the target sum: ");
    scanf("%d", &sum);
    int subset[n];
    for (int i = 0; i < n; i++) {
        subset[i] = 0;
    }
    sum_of_subsets(arr, n, sum, 0, 0, subset);
    return 0;
}
