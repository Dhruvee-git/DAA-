#include<stdio.h>
int isDistinct(int arr[], int n, int num, int pos) {
    for (int i = 0; i < pos; i++) {
        if (arr[i] == num)
            return 0;
    }
    return 1;
}
int main() {
    int arr[] = {12, 10, 9, 45, 2, 10, 10, 45};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Distinct elements: ");
    for (int i = 0; i < n; i++) {
        if (isDistinct(arr, n, arr[i], i))
            printf("%d ", arr[i]);
    }
    return 0;
}

