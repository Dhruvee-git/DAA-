#include<stdio.h>
void rearrange(int arr[], int n) {
    int result[n], left = 0, right = n - 1, flag = 1;
    for (int i = 0; i < n; i++) {
        if (flag)
            result[i] = arr[right--];
        else
            result[i] = arr[left++];
        flag = !flag;
    }
    printf("Rearranged array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    rearrange(arr, n);
    return 0;
}

