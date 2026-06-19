#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void insertionSort(vector<int>& arr, int n) {
        // Sorting the Array as the 1st for loop iterater moves ahead

        /*
        Ex. [6, 3, 9, 5, 2, 4]

        1st iter - [3, 6]
        2nd iter - [3, 6, 9]
        3rd iter - [3, 5, 6, 9]
        4th iter - [2, 3, 5, 6, 9]
        5th iter - [2, 3, 4, 5, 6, 9]
        
        */
        for (int i=0; i<n; i++) {
            int j = i;
            // cout << i << " ";
            // j sets the limit for while loop to be selective for specific elements only.
            while(j > 0 && arr[j-1] > arr[j]) {
                // cout << "While start " << j << " ";
                /*
                j must be > 0 and since the array is going 
                be sorted from first iteration we just need to check
                larger elements should always be on right side.
                */
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;
                // cout << "Swap" << " ";
                j--;
                // swap(arr[j-1], arr[j]);
            }
            // cout << "While ENd " << endl;
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