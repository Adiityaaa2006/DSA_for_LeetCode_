#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void rec_insertionSort(vector<int>& arr, int n, int i) {
        // cout << "i=" << i << " ";
        if (i >= n) return;
        
        int j = i;
        while(j>0 && arr[j] < arr[j-1]) {
            // cout << "While Start i=" << i << " ";
            swap(arr[j], arr[j-1]);
            // cout << "Swap ";
            j--;
        }
        // cout << "While END" << endl;

        rec_insertionSort(arr, n, i+1);
    }
};

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();

    cout << "Before Insertion Sorting: \n";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Solution S1;
    S1.rec_insertionSort(arr, n, 1);

    cout << "After Insertion Sort: " << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}