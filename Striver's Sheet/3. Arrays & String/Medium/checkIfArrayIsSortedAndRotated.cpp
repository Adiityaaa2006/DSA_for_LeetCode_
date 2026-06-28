#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool check(const vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        if (n <= 1) return true;

        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[(i+1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};

int main() {
    vector<int> nums = {3,4,5,1,2};

    cout << "Original Array: ";
    for (int i=0; i<nums.size(); i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    Solution S;

    bool result = S.check(nums);
    cout << "Is Array Sorted? " << result << endl;
}