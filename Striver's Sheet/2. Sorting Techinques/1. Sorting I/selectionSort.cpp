#include<iostream>
using namespace std;

class Solution {
    public:
    void selectionSort(int arr[], int n) {
        // Every time select smallest element of the unsorted part of Array and Sort it.
        for (int i=0; i<n; i++) {  // Outer loop iterrates through whole array
            int key = i; 

            // 4, 6, 2, 9, 5

            for (int j=i+1; j<n; j++) {
                /*
                Inner loop iterates through Array again 
                but always a single index ahead than i, 
                which is i+1
                */
                if (arr[j] < arr[key]) {
                    key = j;
                }
                /*
                If loop check if the jth element in arr
                is smaller than the element at ith position.
                If it is a smaller index then update the key
                with jth index.
                jth -> [5 < 6] <- ith 
                update key to minimun 
                */
            }
            int temp = arr[key];
            arr[key] = arr[i];
            arr[i] = temp;
            /*
            Swapping of elements once second loop finds 
            the smallest element.
            */
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
    S1.selectionSort(arr, n);

    return 0;
}