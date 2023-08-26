#include <iostream>

using namespace std;

int main() {
    int row, column, row_1, column_1;

    cout << "Enter the number of rows of matrix 1: ";
    cin >> row;

    cout << "Enter the number of columns of matrix 1: ";
    cin >> column;

    int mat[row][column];

    cout << "Enter the values for matrix 1:" << endl;
    for (int i = 0; i < row; i++)
        for (int j = 0; j < column; j++)
            cin >> mat[i][j];

    cout << "Original Matrix 1:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    cout << "Enter the number of rows of matrix 2: ";
    cin >> row_1;

    cout << "Enter the number of columns of matrix 2: ";
    cin >> column_1;

    if (column != row_1) {
        cout << "Matrix multiplication is not possible due to incompatible dimensions." << endl;
        return 1;
    }

    int mat_1[row_1][column_1];

    cout << "Enter the values for matrix 2:" << endl;
    for (int i = 0; i < row_1; i++)
        for (int j = 0; j < column_1; j++)
            cin >> mat_1[i][j];

    cout << "Original Matrix 2:" << endl;
    for (int i = 0; i < row_1; i++) {
        for (int j = 0; j < column_1; j++)
            cout << mat_1[i][j] << " ";
        cout << endl;
    }

    cout << "Matrix multiplication result:" << endl;
    int result[row][column_1];
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column_1; j++) {
            result[i][j] = 0;
            for (int k = 0; k < column; k++) {
                result[i][j] += mat[i][k] * mat_1[k][j];
            }
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

