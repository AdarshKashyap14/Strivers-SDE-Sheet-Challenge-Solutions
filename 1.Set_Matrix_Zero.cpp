#include <bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &matrix)
{
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Variables to track if the first row and first column should be set to zero
    bool firstRowZero = false;
    bool firstColZero = false;

    // Check if the first row contains zero
    for (int col = 0; col < cols; col++) {
        if (matrix[0][col] == 0) {
            firstRowZero = true;
            break;
        }
    }

    // Check if the first column contains zero
    for (int row = 0; row < rows; row++) {
        if (matrix[row][0] == 0) {
            firstColZero = true;
            break;
        }
    }

    // Use the first row and first column to mark zero positions
    for (int row = 1; row < rows; row++) {
        for (int col = 1; col < cols; col++) {
            if (matrix[row][col] == 0) {
                matrix[row][0] = 0; // mark the corresponding row
                matrix[0][col] = 0; // mark the corresponding column
            }
        }
    }

    // Set rows to zero based on the first column
    for (int row = 1; row < rows; row++) {
        if (matrix[row][0] == 0) {
            for (int col = 1; col < cols; col++) {
                matrix[row][col] = 0;
            }
        }
    }

    // Set columns to zero based on the first row
    for (int col = 1; col < cols; col++) {
        if (matrix[0][col] == 0) {
            for (int row = 1; row < rows; row++) {
                matrix[row][col] = 0;
            }
        }
    }

    // Set first row to zero if needed
    if (firstRowZero) {
        for (int col = 0; col < cols; col++) {
            matrix[0][col] = 0;
        }
    }

    // Set first column to zero if needed
    if (firstColZero) {
        for (int row = 0; row < rows; row++) {
            matrix[row][0] = 0;
        }
    }
}

int main()
{
    // Example usage
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Before setting zeros:" << endl;
    for (const auto &row : matrix) {
        for (const auto &num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    setZeros(matrix);

    cout << "After setting zeros:" << endl;
    for (const auto &row : matrix) {
        for (const auto &num : row) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
