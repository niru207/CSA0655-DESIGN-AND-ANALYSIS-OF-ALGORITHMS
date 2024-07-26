#include <stdio.h>

#define N 3

int cost_matrix[N][N] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90}
};

int min_cost = INT_MAX;

void assignment_problem(int cost_matrix[][N], int n, int row, int col, int total_cost, int assigned[]) {
    if (row == n) {
        if (total_cost < min_cost) {
            min_cost = total_cost;
            printf("Assignment: ");
            for (int i = 0; i < n; i++) {
                printf("%d ", assigned[i]);
            }
            printf("\n");
        }
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!assigned[i]) {
            assigned[i] = 1;
            assignment_problem(cost_matrix, n, row+1, i, total_cost + cost_matrix[row][i], assigned);
            assigned[i] = 0;
        }
    }
}

int main() {
    int assigned[N] = {0};
    assignment_problem(cost_matrix, N, 0, 0, 0, assigned);
    printf("Minimum cost: %d\n", min_cost);
    return 0;
}
