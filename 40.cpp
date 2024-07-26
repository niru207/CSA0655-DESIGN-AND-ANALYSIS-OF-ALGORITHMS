#include <stdio.h>

#define N 5

int graph[N][N] = {
    {0, 1, 1, 1, 0},
    {1, 0, 1, 0, 1},
    {1, 1, 0, 1, 1},
    {1, 0, 1, 0, 1},
    {0, 1, 1, 1, 0}
};

int hamiltonian_circuit(int graph[][N], int n, int path[], int pos) {
    if (pos == n) {
        if (graph[path[pos-1]][path[0]] == 1) {
            return 1;
        } else {
            return 0;
        }
    }
    for (int i = 0; i < n; i++) {
        if (graph[path[pos-1]][i] == 1 &&!visited[i]) {
            path[pos] = i;
           
