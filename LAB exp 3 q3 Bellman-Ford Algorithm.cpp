#include<stdio.h>
#include<limits.h>
#define V 5
#define E 8
void bellmanFord(int graph[][3], int src) {
    int dist[V];
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[src] = 0;
    for (int i = 1; i < V; i++) {
        for (int j = 0; j < E; j++) {
            int u = graph[j][0];
            int v = graph[j][1];
            int weight = graph[j][2];
            if (dist[u] != INT_MAX && dist[u] + weight < dist[v])
                dist[v] = dist[u] + weight;
        }
    }
    printf("Vertex Distance from Source (Bellman-Ford):\n");
    for (int i = 0; i < V; i++)
        printf("%d \t\t %d\n", i, dist[i]);
}
int main() {
    int graph[E][3] = {
        {0, 1, 10}, {0, 2, 5}, {1, 2, 2},
        {2, 1, 3}, {1, 3, 1}, {2, 3, 9},
        {2, 4, 2}, {4, 3, 6}
    };
    bellmanFord(graph, 0);
    return 0;
}


