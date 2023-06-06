#include <bits/stdc++.h> 
void sort012(int *nums, int n)
{
   //   Write your code here
    int low = 0;       // index for 0s
    int high = n - 1;  // index for 2s
    int mid = 0;       // current index

    while (mid <= high) {
        if (nums[mid] == 0) {
            // Swap the current element with the low index element
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        } else if (nums[mid] == 1) {
            // Move to the next element
            mid++;
        } else if (nums[mid] == 2) {
            // Swap the current element with the high index element
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
