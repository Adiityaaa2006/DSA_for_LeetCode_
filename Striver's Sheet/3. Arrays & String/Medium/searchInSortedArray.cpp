#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int min = INT_MAX;
        for (int i=0; i<n; i++) {
            if (nums[i] < min) {
                min = nums[i];
            }
        }
        return min;
    }
};

int main() {
    // vector<int> nums = {3,4,5,1,2};
    // vector<int> nums = {4,5,6,7,0,1,2};
    vector<int> nums = {11,13,15,17};

    cout << "Sorted Array: " << endl;
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    Solution S1;
    int result = S1.findMin(nums);
    cout << "Minimum: " << result << endl;
}