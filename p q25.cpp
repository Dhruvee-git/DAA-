#include<stdio.h>
int main() {
    int n = 7;
    for (int i = n; i >= 1; i -= 2) {
        for (int j = 1; j <= (n - i) / 2; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}

