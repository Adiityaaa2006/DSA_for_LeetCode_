#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i=0; i<n; i++) {
            int pos = 1;
            for (int j=0; j<n; j++) {
                if (i==j) continue;
                pos *= nums[j];
            }
            ans[i] = pos;
        }
        return ans;
    }
};

int main() {
    vector<int> nums = {};

    Solution S1;
    vector<int> result = S1.productExceptSelf(nums);
    cout << "Output: " << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

}