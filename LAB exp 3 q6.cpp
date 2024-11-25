#include<stdio.h>
int knapsackBT(int W, int wt[], int val[], int n) {
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapsackBT(W, wt, val, n - 1);
    int included = val[n - 1] + knapsackBT(W - wt[n - 1], wt, val, n - 1);
    int excluded = knapsackBT(W, wt, val, n - 1);
    return (included > excluded) ? included : excluded;
}
int main() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    printf("Total Value (BT): %d\n", knapsackBT(W, wt, val, n));
    return 0;
}

