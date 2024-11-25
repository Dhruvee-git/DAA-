#include<stdio.h>
int main() {
    int n = 5;
    int arr[n][n];
    int left = 0, right = n - 1, top = 0, bottom = n - 1, num = 1;

    while (left <= right && top <= bottom) {
        for (int i = left; i <= right; i++)
            arr[top][i] = num;
        top++;
        for (int i = top; i <= bottom; i++)
            arr[i][right] = num;
        right--;
        for (int i = right; i >= left; i--)
            arr[bottom][i] = num;
        bottom--;
        for (int i = bottom; i >= top; i--)
            arr[i][left] = num;
        left++;
        num++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}
