#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &nums, int n)
{
    //  Write your code here.
  
    int i = n - 2;

    // Find the first decreasing element from the right
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Find the next greater element to be swapped
        int j = n - 1;
        while (j > i && nums[j] <= nums[i]) {
            j--;
        }
        
        // Swap the elements
        swap(nums[i], nums[j]);
    }

    // Reverse the remaining elements
    reverse(nums.begin() + i + 1, nums.end());
    return nums;
}
