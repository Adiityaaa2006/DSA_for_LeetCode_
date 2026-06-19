#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution {
    public:
    int second_smallestElement(vector<int>& arr, int n) {
        int small = INT_MAX;
        int sec_small = INT_MAX;

        for (int i=0; i<n; i++) {
            if (arr[i] < small) {
                sec_small = small;
                small = arr[i];
            } else if (arr[i] < sec_small && arr[i] != small) {
                sec_small = arr[i];
            }
        }
        return sec_small;
    }

    int second_largestElement(vector<int>& arr, int n) {
        int max = INT_MIN;
        int sec_max = INT_MIN;

        for (int i=0; i<n; i++) {
            if (arr[i] > max) {
                sec_max = max;
                max = arr[i];
            } else if (arr[i] > sec_max && arr[i] != max) {
                sec_max = arr[i];
            }
        }
        return sec_max;
    }
};

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();

    Solution S1;
    int result1 = S1.second_largestElement(arr, n);
    int result2 = S1.second_smallestElement(arr, n);

    cout << "Second Smallest Element: " << result2 << endl;
    cout << "Second Largest Element: " << result1 << endl;
}