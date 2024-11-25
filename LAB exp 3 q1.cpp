#include<stdio.h>
void activitySelection(int start[], int end[], int n) {
    printf("Selected activities: ");
    int i = 0;
    printf("%d ", i);
    for (int j = 1; j < n; j++) {
        if (start[j] >= end[i]) {
            printf("%d ", j);
            i = j;
        }
    }
}
int main() {
    int start[] = {1, 3, 0, 5, 8, 5};
    int end[] = {2, 4, 6, 7, 9, 9};
    int n = sizeof(start) / sizeof(start[0]);
    activitySelection(start, end, n);
    return 0;
}

