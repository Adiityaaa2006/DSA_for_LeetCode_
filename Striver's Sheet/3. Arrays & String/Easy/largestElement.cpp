#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    int largestElement(vector<int>& arr, int n) {
        int max = 0;

        for (int i=0; i<n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }
        return max;
    }
};

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();

    Solution S1;
    int result = S1.largestElement(arr, n);

    cout << "Largest Element: " << result << endl;
}