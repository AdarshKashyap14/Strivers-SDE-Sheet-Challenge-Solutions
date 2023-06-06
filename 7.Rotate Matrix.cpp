#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
      int top = 0, bottom = n - 1, left = 0, right = m - 1;

    while (top < bottom && left < right) {
        int prev = mat[top + 1][left];

        // Move elements from top row to the right
        for (int i = left; i <= right; i++) {
            swap(prev, mat[top][i]);
        }
        top++;

        // Move elements from right column downward
        for (int i = top; i <= bottom; i++) {
            swap(prev, mat[i][right]);
        }
        right--;

        // Move elements from bottom row to the left
        for (int i = right; i >= left; i--) {
            swap(prev, mat[bottom][i]);
        }
        bottom--;

        // Move elements from left column upward
        for (int i = bottom; i >= top; i--) {
            swap(prev, mat[i][left]);
        }
        left++;
    }

}
