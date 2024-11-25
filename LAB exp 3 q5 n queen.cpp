#include<stdio.h>
#define N 4
void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", board[i][j]);
        printf("\n");
    }
    printf("\n");
}
int isSafe(int board[N][N], int row, int col) {
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return 0;
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return 0;
    for (int i = row, j = col; i < N && j >= 0; i++, j--)
        if (board[i][j])
            return 0;
    return 1;
}
int solveNQUtil(int board[N][N], int col) {
    if (col >= N) {
        printSolution(board);
        return 1;
    }
    int res = 0;
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            res = solveNQUtil(board, col + 1) || res;
            board[i][col] = 0;
        }
    }
    return res;
}
void solveNQ() {
    int board[N][N] = {0};
    if (!solveNQUtil(board, 0))
        printf("No solution exists\n");
}
int main() {
    solveNQ();
    return 0;
}

