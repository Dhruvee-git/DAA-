#include<stdio.h>
int main() {
    int m, n, matrix[10][10], count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    printf("Enter matrix elements:\n");
    for (int i = 0; i < m; i++) 
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] != 0)
                count++;
        }
    printf("Total nonzero elements: %d\n", count);
    return 0;
}

