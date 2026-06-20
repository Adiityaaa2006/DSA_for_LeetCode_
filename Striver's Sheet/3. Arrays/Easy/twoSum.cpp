/*
LeetCode - 1. Two Sum

link - https://leetcode.com/problems/two-sum/description/

Solved - Easy
Topics - Array, Hash Table

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
You may assume that each input would have exactly one solution, and you may not use the same element twice.
You can return the answer in any order.

Example 1:
Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

Example 2:
Input: nums = [3,2,4], target = 6
Output: [1,2]

Example 3:
Input: nums = [3,3], target = 6
Output: [0,1]
 
Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mpp;

        for (int i=0; i<nums.size(); i++) {
            cout << "Array Digit - " << nums[i] << " i=" << i << " ";
            int diff = target - nums[i];
            cout << "Difference - " << diff << " ";
            // first iteration
            // value = 9 - 2
            // value = 7

            // second iteration
            // value = 9 - 7
            // value = 2 

            if (mpp.find(diff) != mpp.end()) {
                cout << "Value Exits ";
                // 1st iter - finds value(7) in map but map is empty.
                // 2nd iter - finds value(2) in map
                return {mpp[diff], i};
                // if value(2) found in the map return it.
            }
            mpp[nums[i]] = i;
            cout << "Update Map: <Key, Index> - " << nums[i] << " : " << i << endl; 
            // Stores the value and index in the map
            // For i=0, nums[i] = 2
            // {
            //   2 : 0     2 is value and 0 is index
            // }
        }
        return {};        
    }
};

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;

    Solution S1;
    vector<int> arr = S1.twoSum(nums, target);
    for (int i=0; i<arr.size(); i++) {
        cout << arr[i] << " ";
    }
}