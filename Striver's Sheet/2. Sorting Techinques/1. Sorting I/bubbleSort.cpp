#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void bubbleSort(vector<int>& arr, int n) {
        // Finds the largest element and sort it.
        for (int i=n-1; i>=0; i--) {
            /*
            Loop running in an reverse order so that 
            every time the highest element gets sorted,
            second loop will run till the ith index which 
            exclude the highest element index & saves time.
            */
            bool swapped = false;

            // 13, 46, 24, 52, 20, 9
            for (int j=0; j<i; j++) {
                if (arr[j] > arr[j+1]) { 
                    /*
                    If element at j is greater than j+1 then,
                    swap them. 
                    */
                    swap(arr[j], arr[j+1]);
                    swapped = true;
                    // If swap has happened then define it as true
                }
            }

            if (!swapped) break;
            /*
            If the array is not swapped this means 
            the array is sorted. There is noo need to iterate further,
            this breaks the loop and exists which saves time.
            */
        }

        cout << "After Bubble Sort: " << endl;
        for (int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
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
    S1.bubbleSort(arr, n);

    return 0;
}