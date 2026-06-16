#include<iostream>
using namespace std;

class Solution {
    public:
    void insertionSort(int arr[], int n) {
        for (int i=0; i<n; i++) {
            int mini = i;

            // 4, 6, 2, 9, 5

            for (int j=i+1; j<n; j++) {
                if (arr[j] < arr[mini]) {
                    mini = j;
                }
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
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
    int n;

    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n] = {9, 5, 2, 7, 8};

    cout << "Before Insertion Sorting: \n";
    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    Solution S1;

    S1.insertionSort(arr, n);

    return 0;
}