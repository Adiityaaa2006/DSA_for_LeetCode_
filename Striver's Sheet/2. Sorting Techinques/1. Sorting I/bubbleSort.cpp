#include<iostream>
#include<vector>
using namespace std;

class Solution {
    public:
    void bubbleSort(vector<int>& arr, int n) {

        for (int i=n-1; i>=0; i--) {

            bool swapped = false;

            // 13, 46, 24, 52, 20, 9
            for (int j=0; j<i; j++) {
                if (arr[j] > arr[j+1]) { 
                    swap(arr[j], arr[j+1]);
                    // int temp = arr[j];
                    // arr[j] = arr[j+1];
                    // arr[j+1] = temp;
                }
            }

            if (!swapped) break;
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