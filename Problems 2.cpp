#include<stdio.h>
int main() {
    int n, i, j, val, arr[100];
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for (int k = 0; k < n; k++) 
        scanf("%d", &arr[k]);
    // Insertion
    printf("Enter position to insert and value: ");
    scanf("%d %d", &i, &val);
    for (int k = n; k > i; k--)
        arr[k] = arr[k - 1];
    arr[i] = val;
    n++;
    // Deletion
    printf("Enter position to delete: ");
    scanf("%d", &j);
    for (int k = j; k < n - 1; k++)
        arr[k] = arr[k + 1];
    n--;
    printf("Updated array: ");
    for (int k = 0; k < n; k++)
        printf("%d ", arr[k]);
    return 0;
}

