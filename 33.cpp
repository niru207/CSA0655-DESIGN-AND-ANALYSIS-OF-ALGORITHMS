#include <stdio.h>

int is_safe(int board[][10], int row, int col, int n) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return 0;
        }
        if (col - (row - i) >= 0 && board[i][col - (row - i)] == 1) {
            return 0;
        }
        if (col + (row - i) < n && board[i][col + (row - i)] == 1) {
            return 0;
        }
    }
    return 1;
}

void solve_n_queens(int board[][10], int row, int n) {
    if (row == n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%d ", board[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        return;
    }
    for (int col = 0; col < n; col++) {
        if (is_safe(board, row, col, n)) {
            board[row][col] = 1;
            solve_n_queens(board, row + 1, n);
            board[row][col] = 0;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of queens: ");
    scanf("%d", &n);
    int board[10][10] = {{0}};
    solve_n_queens(board, 0, n);
    return 0;
}
