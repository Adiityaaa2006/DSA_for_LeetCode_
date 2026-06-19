#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    bool check(const vector<int>& nums) {
        int n = nums.size();
        if (n <= 1) return true;

        for (int i = 0; i < n; ++i) {
            if (nums[i] > nums[i+1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    vector<int> nums = {1,2,3,4,5};

   
    Solution S1;
    bool result = S1.check(nums);
    
    (cout << "Is Array Sorted? " << result << " - ") ? "True" : "False";

    printf("%s", S1.check(nums) ? "True" : "False");
}