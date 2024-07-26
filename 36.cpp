#include <stdio.h>

#define N 4
#define M 3

int graph[N][N] = {
    {0, 1, 1, 1},
    {1, 0, 1, 0},
    {1, 1, 0, 1},
    {1, 0, 1, 0}
};

int colors[M] = {1, 2, 3};

int is_safe(int vertex, int color, int assignment[]) {
    for (int i = 0; i < N; i++) {
        if (graph[vertex][i] == 1 && assignment[i] == color) {
            return 0;
        }
    }
    return 1;
}

void graph_coloring(int assignment[], int vertex) {
    if (vertex == N) {
        for (int i = 0; i < N; i++) {
            printf("%d ", assignment[i]);
        }
        printf("\n");
        return;
    }
    for (int i = 0; i < M; i++) {
        if (is_safe(vertex, colors[i], assignment)) {
            assignment[vertex] = colors[i];
            graph_coloring(assignment, vertex + 1);
            assignment[vertex] = 0;
        }
    }
}

int main() {
    int assignment[N];
    for (int i = 0; i < N; i++) {
        assignment[i] = 0;
    }
    graph_coloring(assignment, 0);
    return 0;
}
