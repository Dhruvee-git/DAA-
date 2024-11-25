#include<stdio.h>
typedef struct {
    int weight;
    int value;
    float ratio;
} Item;
void knapsackGreedy(Item items[], int n, int W) {
    for (int i = 0; i < n; i++)
        items[i].ratio = (float)items[i].value / items[i].weight;
    // Sort items by value/weight ratio
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (items[i].ratio < items[j].ratio) {
                Item temp = items[i];
                items[i] = items[j];
                items[j] = temp;
            }
        }
    }
    int totalWeight = 0;
    int totalValue = 0;
    for (int i = 0; i < n; i++) {
        if (totalWeight + items[i].weight <= W) {
            totalWeight += items[i].weight;
            totalValue += items[i].value;
        } else {
            break;
        }
    }
    printf("Total Value (Greedy): %d\n", totalValue);
}
int main() {
    int n = 4, W = 50;
    Item items[] = {{10, 60}, {20, 100}, {30, 120}};
    knapsackGreedy(items, n, W);
    return 0;
}

