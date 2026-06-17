#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;

        int left = low;
        int right = mid+1;

        while(left <= mid && right <= high) {
            if (arr[left] < arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        while(left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        while(right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        for (int i=low; i<high; i++) {
            arr[i] = temp[i-low];
        }
    }

    void mS(vector<int>& arr, int low, int high) {
        if (low >= high) {
            return;
        }

        int mid = (low + high) / 2;

        mS(arr, low, mid);
        mS(arr, mid+1, high);
        merge(arr, low, mid, high);
    }

    void mergeSort(vector<int>& arr, int n) {
        mS(arr, 0, n-1);

        cout << "After Merge Sorting: \n";
        for (int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> arr = {3,2,8,5,1,4,23};
    int n = arr.size();

    cout << "Before Merge Sorting: \n";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Solution S1;
    S1.mergeSort(arr, n);
}