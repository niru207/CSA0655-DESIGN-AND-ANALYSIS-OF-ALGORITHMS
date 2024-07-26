#include <stdio.h>

typedef struct {
    int size;
    int weight;
} Container;

void container_loader(Container containers[], int n, int capacity) {
    int i, total_weight = 0;
    for (i = 0; i < n; i++) {
        if (total_weight + containers[i].weight <= capacity) {
            total_weight += containers[i].weight;
            printf("Loaded container %d with size %d and weight %d\n", i, containers[i].size, containers[i].weight);
        }
    }
    printf("Total weight: %d\n", total_weight);
}

int main() {
    Container containers[] = {{10, 5}, {20, 10}, {15, 8}, {30, 15}, {25, 12}};
    int n = sizeof(containers) / sizeof(containers[0]);
    int capacity = 50;
    container_loader(containers, n, capacity);
    return 0;
}
