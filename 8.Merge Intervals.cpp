#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[0] < b[0];
    });

    vector<vector<int>> mergedIntervals;
    vector<int> currentInterval = intervals[0];

    for (int i = 1; i < intervals.size(); i++) {
        // Check for overlapping intervals
        if (currentInterval[1] >= intervals[i][0]) {
            // Merge intervals by updating the end time
            currentInterval[1] = max(currentInterval[1], intervals[i][1]);
        } else {
            // Add the current interval to the result vector
            mergedIntervals.push_back(currentInterval);
            // Update the current interval to be the next interval
            currentInterval = intervals[i];
        }
    }

    // Add the last interval to the result vector
    mergedIntervals.push_back(currentInterval);

    return mergedIntervals;
}
