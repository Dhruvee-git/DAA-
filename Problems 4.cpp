#include <iostream>
using namespace std;

int main() {
    int rows = 3, cols = 3;
    int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    
    for (int i = 0; i < rows; i++) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        cout << "Row " << i + 1 << " sum: " << rowSum << endl;
        cout << "Column " << i + 1 << " sum: " << colSum << endl;
    }
    return 0;
}

