#include<iostream>
using namespace std;

class Solution {
    public:
    void insertionSort(int arr[], int n) {
        for (int i=0; i<n; i++) {
            int key = i;

            // 4, 6, 2, 9, 5

            for (int j=i+1; j<n; j++) {
                if (arr[j] < arr[key]) {
                    key = j;
                }
            }
            int temp = arr[key];
            arr[key] = arr[i];
            arr[i] = temp;
        }

        cout << "After Insertion Sorting: \n";
        for (int i=0; i<n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Before Insertion Sorting: \n";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Solution S1;
    S1.insertionSort(arr, n);

    return 0;
}