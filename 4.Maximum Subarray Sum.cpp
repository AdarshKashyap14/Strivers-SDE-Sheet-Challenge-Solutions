#include <bits/stdc++.h> 
long long maxSubarraySum(int arr[], int n)
{
    /*
        Don't write main().
        Don't read input, it is passed as function argument.    
        No need to print anything.
        Taking input and printing output is handled automatically.
    */
    long long maxSum = INT_MIN;
    long long currentSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum += arr[i];

        // If the current sum becomes negative, reset it to 0
        if (currentSum < 0) {
            currentSum = 0;
        }

        // Update the maximum sum if the current sum is greater
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }

    return maxSum;
}
