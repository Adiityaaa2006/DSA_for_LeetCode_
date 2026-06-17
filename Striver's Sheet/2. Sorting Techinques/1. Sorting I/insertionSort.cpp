#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void insertionSort(vector<int>& arr, int n) {
        for (int i=0; i<n; i++) {
            int j = i;
            while(j > 0 && arr[j-1] > arr[j]) {
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                j--;
                // swap(arr[j-1], arr[j]);
            }
        }

        cout << "After Insertion Sort: " << endl;
        for (int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> arr = {7, 4, 1, 5, 3};
    int n = arr.size();

    cout << "Before Insertion Sorting: \n";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Solution S1;
    S1.insertionSort(arr, n);
}