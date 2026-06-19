#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void rec_bubbleSort(vector<int>& arr, int n) {
        // cout << "N Value: " << n << endl;
        if (n <= 1) return;

        int i = 0;
        while(i < n-1) {
            // cout << "While Start i=" << i << " ";
            if (arr[i] > arr[i+1]) {  // Sort Array in Ascending Order - Lower to Greater
                swap(arr[i], arr[i+1]);  
                // cout << "Swap " << i << " ";
            }
            i++;
        }
        // cout << "While END " << endl;

        rec_bubbleSort(arr, n-1);
    }
};

int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    int n = arr.size();

    cout << "Before Bubble Sorting: \n";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Solution S1;
    S1.rec_bubbleSort(arr, n);

    cout << "After Bubble Sort: " << endl;
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
