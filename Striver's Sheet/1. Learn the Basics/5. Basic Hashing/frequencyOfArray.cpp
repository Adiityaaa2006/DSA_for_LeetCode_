#include<iostream>
using namespace std;

class Solution {
    public: 
    void function() {
        int n;
        cout << "Enter the Size of the Array: ";
        cin >> n;

        int arr[n];
        int hash[20] = {0};
        for (int i=0; i<n; i++) {
            cin >> arr[i]; // input as 11
            hash[arr[i]]++;  // 11 -> 1
        }

        int occ;
        cout << "How many numbers to check? ";
        cin >> occ;

        while(occ--) {
            int num;

            cout << "Number to find its Occurence: ";
            cin >> num;

            cout << hash[num] << endl;
        }

        // int num;
        // cout << "Enter the number to find its occurance: ";
        // cin >> num;
        // if(num > 0) {    
        //     cout << hash[num] << endl;
        // }
    }
};

int main() {
    Solution S1;

    S1.function();

    return 0;
}