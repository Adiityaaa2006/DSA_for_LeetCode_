#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    vector<int> revArray(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n);

        for (int i=0; i<n; i++) {
            ans[i] = arr[n-1-i];
        }
        return ans;
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    Solution S1;

    vector<int> result = S1.revArray(arr);
    cout << "Reverse Array: ";
    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}
