/*
LeetCode - 121. Best Time to Buy and Sell Stock

link - https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

Solved - Easy
Topics - Array, Dynamic Programming

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

 Example 1:
Input: prices = [7,1,5,3,6,4]
Output: 5
Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

Example 2:
Input: prices = [7,6,4,3,1]
Output: 0
Explanation: In this case, no transactions are done and the max profit = 0.
 
Constraints:
1 <= prices.length <= 105
0 <= prices[i] <= 104

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // Kadane's Algorithm
        /*
        In easy words for understanding - "Don't look back"
        Kadane's Algo only consider the upcoming elements not the previous elements.
        */
        int n = prices.size();
        int buy = prices[0];
        int profit = 0;        
        // Initialize buy as 1st element of prices and profit as 0.

        for (int i=1; i<n; i++) {
            // if any element smaller than buy, update the buy.
            if(prices[i] < buy) {
                buy = prices[i];
            } 
            // Calculate the profit once we found buy.
            // Maximum profit will be updated.
            else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};

int main () {
    // vector<int> prices = {7,6,4,3,1};
    vector<int> prices = {7,1,5,3,6,4};
    
    Solution S1;
    int result = S1.maxProfit(prices);
    cout << "Profit: " << result << endl;

    return 0;
}