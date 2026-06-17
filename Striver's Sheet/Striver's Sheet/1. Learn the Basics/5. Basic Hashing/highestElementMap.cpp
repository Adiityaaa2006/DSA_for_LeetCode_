#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

class Solution {
    public:
    void function(int arr[], int n) {

        unordered_map<int, int> mpp;

        for (int i=0; i<n; i++) {
            mpp[arr[i]]++;
        }

        int maxEle = 0, minEle = 0;
        int maxCount = 0, minCount = n;

        for (auto it : mpp) {
            int element = it.first;
            int count = it.second;

            if (count > maxCount) {
                maxCount = count;
                maxEle = element;
            }

            if (count < minCount) {
                minCount = count;
                minEle = element;
            }
        }

        cout << "The highest frequency element is : " << maxEle << endl;
        cout << "The lowest frequency element is : " << minEle << endl;
    }
};

int main() {
    Solution S1;
    int arr[] = {10, 5, 10, 15, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    S1.function(arr, n);

    return 0;
}