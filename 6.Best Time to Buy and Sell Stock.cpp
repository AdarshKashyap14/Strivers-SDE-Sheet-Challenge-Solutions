#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    
    int n = prices.size();
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        // Update the minimum price if a lower price is found
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        }
        // Update the maximum profit if a higher selling price is found
        else if (prices[i] - minPrice > maxProfit) {
            maxProfit = prices[i] - minPrice;
        }
    }

    return maxProfit;
}
