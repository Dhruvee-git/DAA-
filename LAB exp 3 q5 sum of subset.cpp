#include<stdio.h>
void sumOfSubsets(int arr[], int n, int sum, int currentSum, int index) {
    if (currentSum == sum) {
        printf("Subset found\n");
        return;
    }
    if (index >= n || currentSum > sum)
        return;
    sumOfSubsets(arr, n, sum, currentSum + arr[index], index + 1);
    sumOfSubsets(arr, n, sum, currentSum, index + 1);
}
int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 9;
    sumOfSubsets(arr, n, sum, 0, 0);
    return 0;
}

