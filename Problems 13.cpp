#include<stdio.h>
void findSecondLargestSmallest(int arr[], int n, int *secondLargest, int *secondSmallest) {
    int largest = -1, smallest = 1e9;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest)
            largest = arr[i];
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    *secondLargest = -1;
    *secondSmallest = 1e9;
    for (int i = 0; i < n; i++) {
        if (arr[i] > *secondLargest && arr[i] < largest)
            *secondLargest = arr[i];
        if (arr[i] < *secondSmallest && arr[i] > smallest)
            *secondSmallest = arr[i];
    }
}
int main() {
    int arr[] = {10, 20, 4, 5, 3, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int secondLargest, secondSmallest;
    findSecondLargestSmallest(arr, n, &secondLargest, &secondSmallest);
    for (int i = 0; i < n; i++) {
        if (arr[i] == secondLargest)
            arr[i] = secondSmallest;
        else if (arr[i] == secondSmallest)
            arr[i] = secondLargest;
    }
    printf("Modified array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

