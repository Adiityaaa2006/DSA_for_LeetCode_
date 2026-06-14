#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cout << "Enter the Size of Numbers: ";
    cin >> n;

    int arr[n];
    unordered_map<int, int> mpp;
    
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    for (auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }

    int q;

    cout << "Enter the time to fetch: ";
    cin >> q;

    while(q--) {
        int number;

        cout << "Enter the Number: ";
        cin >> number;

        //fetch
        cout << mpp[number] << endl;
    }
    return 0;
}