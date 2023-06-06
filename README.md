# Strivers-SDE-Sheet-Challenge-Solutions
## 1.Set Matrix Zeroes

**Problem:** Given an m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

### Example:

Input:
[
[1, 1, 1],
[1, 0, 1],
[1, 1, 1]
]

Output:
[
[1, 0, 1],
[0, 0, 0],
[1, 0, 1]
]

## 2.Pascal's Triangle

**Problem:** Pascal's Triangle is a triangular array of integers constructed with the following pattern:

- Each row starts and ends with 1.
- Each subsequent row is generated by summing up the two adjacent numbers in the previous row.

### Example:

Input: `numRows = 5`

Output:
[
[1],
[1,1],
[1,2,1],
[1,3,3,1],
[1,4,6,4,1]
]

## 3.Next Permutation

**Problem:** Given a permutation of numbers, find the next permutation in lexicographic order. If there is no next permutation, return the permutation in ascending order.

### Example:

Input: `[1, 2, 3]`

Output: `[1, 3, 2]`

Input: `[3, 2, 1]`

Output: `[1, 2, 3]`

## 4. Maximum Subarray Sum

**Problem:** Given an array of integers, find the contiguous subarray with the largest sum.

### Example:

Input: `[-2, 1, -3, 4, -1, 2, 1, -5, 4]`

Output: `6` (The subarray with the largest sum is `[4, -1, 2, 1]`)

## 5.Sort 0 1 2

**Problem:** Given an array containing only 0s, 1s, and 2s, sort the array in-place in ascending order.

### Example:

Input: `[2, 0, 1, 2, 1, 0]`

Output: `[0, 0, 1, 1, 2, 2]`

## 6.Best Time to Buy and Sell Stock

**Problem:** Given an array `prices` representing the daily prices of a stock, find the maximum profit that can be obtained by buying and selling the stock.

### Example:

Input: `[7, 1, 5, 3, 6, 4]`

Output: `5` (Buy on day 2 (price = 1) and sell on day 5 (price = 6) for a profit of 6 - 1 = 5)

## 7.Rotate Matrix

Given a 2-dimensional matrix of size 'N' x 'M', rotate the elements of the matrix clockwise.

### Example:

Input Matrix:
[
[1, 2, 3],
[4, 5, 6],
[7, 8, 9]
]

Output Matrix:
[
[4, 1, 2],
[7, 5, 3],
[8, 9, 6]
]

## 8.Merge Intervals

Given a collection of intervals, merge overlapping intervals.

### Example:

Input: `[[1, 3], [2, 6], [8, 10], [15, 18]]`

Output: `[[1, 6], [8, 10], [15, 18]]`

